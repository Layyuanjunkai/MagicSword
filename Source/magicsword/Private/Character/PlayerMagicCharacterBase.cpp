// Copyright Edward


#include "Character/PlayerMagicCharacterBase.h"

#include "AbilitySystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Player/MagicSwordPlayerState.h"

APlayerMagicCharacterBase::APlayerMagicCharacterBase()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}

void APlayerMagicCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	// Init ability info for the sever
	InitAbilityActorInfo();

}

void APlayerMagicCharacterBase::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	// Init ability info for the client
	InitAbilityActorInfo();
}

void APlayerMagicCharacterBase::InitAbilityActorInfo()
{
	AMagicSwordPlayerState* MagicSwordPlayerState =GetPlayerState<AMagicSwordPlayerState>();
	check(MagicSwordPlayerState);
	MagicSwordPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(MagicSwordPlayerState,this);
	AbilitySystemComponent = MagicSwordPlayerState->GetAbilitySystemComponent();
	AttributeSet = MagicSwordPlayerState->GetAttributeSet();
}
