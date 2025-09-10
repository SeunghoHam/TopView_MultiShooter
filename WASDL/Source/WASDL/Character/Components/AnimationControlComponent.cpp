// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimationControlComponent.h"
#include "GameFramework/Character.h"
#include "ProfilingDebugging/BootProfiling.h"
#include "WASDL/Character/Animation/UzuhaAnimMontageMap.h"

UAnimationControlComponent::UAnimationControlComponent()
{
	bServerAuthOnly = true;	
}


void UAnimationControlComponent::OnRegister()
{
	Super::OnRegister();
	if (bAutoBindDelegates)
	{
		if (UAnimInstance* AnimInst = GetAnimInstance())
		{
			AnimInst->OnMontageBlendingOut.AddDynamic(this, &UAnimationControlComponent::HandleMontageBlendingOut);
			AnimInst->OnMontageEnded.AddDynamic(this, &UAnimationControlComponent::HandleMontageEnded);
			BoundAnimInstance = AnimInst;
		}
	}
}


void UAnimationControlComponent::OnUnregister()
{
	if (BoundAnimInstance.IsValid())
	{
		if (UAnimInstance* AnimInst = BoundAnimInstance.Get())
		{
			AnimInst->OnMontageBlendingOut.RemoveDynamic(this, &UAnimationControlComponent::HandleMontageBlendingOut);
			AnimInst->OnMontageEnded.RemoveDynamic(this, &UAnimationControlComponent::HandleMontageEnded);
		}
		BoundAnimInstance.Reset();
	}
	Super::OnUnregister();
}

USkeletalMeshComponent* UAnimationControlComponent::ResolveMesh() const
{
	if (TargetMeshOverride)
	{
		return TargetMeshOverride;
	}
	if (const ACharacter* Char = Cast<ACharacter>(GetOwner()))
	{
		return Char->GetMesh();
	}
	// 마지막 시도: Owner에서 첫 번째 스켈레탈 메쉬 찾기
	return GetOwner() ? GetOwner()->FindComponentByClass<USkeletalMeshComponent>() : nullptr;
}


UAnimInstance* UAnimationControlComponent::GetAnimInstance() const
{
	if (USkeletalMeshComponent* Mesh = ResolveMesh())
	{
		return Mesh->GetAnimInstance();
	}
	return nullptr;
}


bool UAnimationControlComponent::ShouldRouteToServer() const
{
	return bServerAuthOnly && GetOwner() && !GetOwner()->HasAuthority();
}

float UAnimationControlComponent::ServerAuthoritativePlay(UAnimMontage* Montage, float PlayRate, FName StartSection)
{
	if (!Montage) return 0.f;

	// 1) 서버 권위 체크
	if (!GetOwner() || !GetOwner()->HasAuthority()) return 0.f;

	// 2) 멀티캐스트로 모든 피어에게 재생(서버 포함)
	Multicast_PlayMontage(Montage, PlayRate, StartSection);

	// 3) (선택) 서버 길이 반환을 원하면 여기서 길이 측정:
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		return Montage->GetPlayLength();
	}
	return 0.f;
	
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("ServerAuthorityPlay"));
	/*
	if (ACharacter* Char = Cast<ACharacter>(GetOwner()))
	{

		//UE_LOG(LogTemp, Warning, TEXT("MapdataLength : %d"), MontageMapData->MontageMap.Num());
		// 서버에서 Character API를 쓰면 AnimMontage 복제가 자동으로 처리됨.
		//Char->PlayAnimMontage(Montage, PlayRate);
		
		float Len = Char->PlayAnimMontage(Montage, PlayRate);
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow,
		//FString::Printf(TEXT("PlayMontage : %s, Len : %f"),*Char->GetName(), Len));
		if (Len > 0.f && StartSection != NAME_None)
		{
			if (UAnimInstance* AnimInst = GetAnimInstance())
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Montage_JumpSection"));
				
				AnimInst->Montage_JumpToSection(StartSection, Montage);
			}
		}
		return Len;
	}
	// 캐릭터가 아니라면 직접 AnimInstance에 플레이(복제는 직접 관리해야 함)
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		float Len = AnimInst->Montage_Play(Montage, PlayRate);
		if (Len > 0.f && StartSection != NAME_None)
		{
			AnimInst->Montage_JumpToSection(StartSection, Montage);
		}
		return Len;
	}
	return 0.f;*/
}

void UAnimationControlComponent::Multicast_PlayMontage_Implementation(UAnimMontage* Montage, float PlayRate,
	FName StartSection)
{
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		const float Len = AnimInst->Montage_Play(Montage, PlayRate);
		if (Len > 0.f && StartSection != NAME_None)
		{
			AnimInst->Montage_JumpToSection(StartSection, Montage);
		}
	}
}

// ===================== Public API =====================
float UAnimationControlComponent::PlayMontage(UAnimMontage* Montage, float PlayRate, FName StartSection)
{
	if (!Montage) return 0.f;

	// GPT 테스트
	if (ShouldRouteToServer()) // 클라에서 호출됨
	{
		// 1) 오너 클라 로컬 예측 재생 (시각만)
		if (UAnimInstance* AnimInst = GetAnimInstance())
		{
			AnimInst->Montage_Play(Montage, PlayRate);
			if (StartSection != NAME_None)
			{
				AnimInst->Montage_JumpToSection(StartSection, Montage);
			}
		}
		// 2) 서버 권위 호출
		Server_PlayMontage(Montage, PlayRate, StartSection);
		return 0.f;
	}

	// 서버라면 권위 경로
	return ServerAuthoritativePlay(Montage, PlayRate, StartSection);
	/*
	if (ShouldRouteToServer())
	{
		Server_PlayMontage(Montage, PlayRate, StartSection);
		return 0.f; // 실제 길이는 서버에서 계산됨
	}
	return ServerAuthoritativePlay(Montage, PlayRate, StartSection);*/
}


float UAnimationControlComponent::PlayByName(FName Key, float PlayRate, FName StartSection)
{
	//if (UAnimMontage** Found = MontageMap.Find(Key))
	UAnimMontage* Montage = MontageMapData->MontageMap.Find(Key)->Get(); //GetMontageByKey(MontageMapData->MontageMap.Find(Key));
	if (Montage)	
	{
		//UE_LOG(LogTemp, Warning, TEXT("MontageName : %s"),  *Montage->GetName());
		return PlayMontage(Montage, PlayRate, StartSection);
	}
	UE_LOG(LogTemp, Warning, TEXT("AnimationControlComponent: No montage mapped to key '%s'"), *Key.ToString());
	return 0.f;
}


void UAnimationControlComponent::StopMontage(UAnimMontage* Montage, float BlendOutTime)
{
	if (!Montage) return;


	if (ShouldRouteToServer())
	{
		Server_StopMontage(Montage, BlendOutTime);
		return;
	}
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_Stop(BlendOutTime, Montage);
	}
}
void UAnimationControlComponent::PauseMontage(UAnimMontage* Montage)
{
	if (!Montage) return;
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_Pause(Montage);
	}
	// 동기화를 위해 멀티캐스트
	Multicast_PauseMontage(Montage);
}


void UAnimationControlComponent::ResumeMontage(UAnimMontage* Montage)
{
	if (!Montage) return;
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_Resume(Montage);
	}
	Multicast_ResumeMontage(Montage);
}
void UAnimationControlComponent::JumpToSection(UAnimMontage* Montage, FName SectionName)
{
	if (!Montage || SectionName.IsNone()) return;
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_JumpToSection(SectionName, Montage);
	}
	Multicast_JumpToSection(Montage, SectionName);
}


void UAnimationControlComponent::SetPlayRate(UAnimMontage* Montage, float NewRate)
{
	if (!Montage) return;
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_SetPlayRate(Montage, NewRate);
	}
	Multicast_SetPlayRate(Montage, NewRate);
}


void UAnimationControlComponent::SetPosition(UAnimMontage* Montage, float NewPositionSeconds, bool bFireNotifies)
{
	if (!Montage) return;
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_SetPosition(Montage, NewPositionSeconds);
		if (bFireNotifies)
		{
			// 필요한 경우: Notify 수동 처리 커스텀 로직 추가 가능
		}
	}
	Multicast_SetPosition(Montage, NewPositionSeconds, bFireNotifies);
}
bool UAnimationControlComponent::IsPlaying(UAnimMontage* Montage) const
{
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		return AnimInst->Montage_IsPlaying(Montage);
	}
	return false;
}


float UAnimationControlComponent::GetPosition(UAnimMontage* Montage) const
{
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		return AnimInst->Montage_GetPosition(Montage);
	}
	return 0.f;
}


float UAnimationControlComponent::GetLength(UAnimMontage* Montage) const
{
	return Montage ? Montage->GetPlayLength() : 0.f;
}



// ===================== Delegates =====================
void UAnimationControlComponent::HandleMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
{
	OnMontageBlendingOut.Broadcast(Montage, bInterrupted);
}


void UAnimationControlComponent::HandleMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	OnMontageEnded.Broadcast(Montage, bInterrupted);
}


// ===================== RPC Implementations =====================
void UAnimationControlComponent::Server_PlayMontage_Implementation(UAnimMontage* Montage, float PlayRate, FName StartSection)
{
	ServerAuthoritativePlay(Montage, PlayRate, StartSection);
}


void UAnimationControlComponent::Server_StopMontage_Implementation(UAnimMontage* Montage, float BlendOutTime)
{
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_Stop(BlendOutTime, Montage);
	}
}
void UAnimationControlComponent::Multicast_PauseMontage_Implementation(UAnimMontage* Montage)
{
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_Pause(Montage);
	}
}


void UAnimationControlComponent::Multicast_ResumeMontage_Implementation(UAnimMontage* Montage)
{
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_Resume(Montage);
	}
}


void UAnimationControlComponent::Multicast_JumpToSection_Implementation(UAnimMontage* Montage, FName SectionName)
{
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_JumpToSection(SectionName, Montage);
	}
}


void UAnimationControlComponent::Multicast_SetPlayRate_Implementation(UAnimMontage* Montage, float NewRate)
{
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_SetPlayRate(Montage, NewRate);
	}
}


void UAnimationControlComponent::Multicast_SetPosition_Implementation(UAnimMontage* Montage, float NewPositionSeconds, bool /*bFireNotifies*/)
{
	if (UAnimInstance* AnimInst = GetAnimInstance())
	{
		AnimInst->Montage_SetPosition(Montage, NewPositionSeconds);
	}
}

UAnimMontage* UAnimationControlComponent::GetMontageByKey(TSoftObjectPtr<UAnimMontage>* _data)
{
	return _data->Get();
}
// ===================== Notes =====================
// * Multiplayer 권장 흐름:
// - 클라이언트 입력 -> 컴포넌트 PlayByName/PlayMontage 호출
// - bServerAuthOnly=true 이면 자동으로 Server RPC로 라우팅
// - 서버는 ACharacter::PlayAnimMontage 로 플레이 (복제 자동)
// - 세밀 제어(일시정지/재개/점프/속도/위치)는 Multicast 로 보강 동기화
// * 단일플레이어/로컬 만이라면 bServerAuthOnly=false 로 두고 로컬 AnimInstance에 직접 적용.
// * Slot/LayeredBlendPerBone 구성 및 Root Motion 모드는 AnimGraph 쪽 설정 필요.
// * Notify/BranchingPoint는 Montage 에셋에서 작성하고, 필요하면 OnMontage… 델리게이트로 게임플레이 연계.
