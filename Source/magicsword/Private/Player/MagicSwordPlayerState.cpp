// Copyright Edward


#include "Player/MagicSwordPlayerState.h"
#include "AbilitySystem/MagicSwordAbilitySystemComponent.h"
#include "AbilitySystem/MagicSwordAttributeSet.h"

AMagicSwordPlayerState::AMagicSwordPlayerState()
{


	AbilitySystemComponent = CreateDefaultSubobject<UMagicSwordAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	AttributeSet = CreateDefaultSubobject<UMagicSwordAttributeSet>("AttributeSet");

	NetUpdateFrequency = 100.f;
}

UAbilitySystemComponent* AMagicSwordPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
