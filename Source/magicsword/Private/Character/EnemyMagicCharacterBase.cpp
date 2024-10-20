// Copyright Edward


#include "Character/EnemyMagicCharacterBase.h"
#include "AbilitySystem/MagicSwordAbilitySystemComponent.h"
#include "AbilitySystem/MagicSwordAttributeSet.h"
#include "magicsword/magicsword.h"

AEnemyMagicCharacterBase::AEnemyMagicCharacterBase()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility,ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UMagicSwordAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	AttributeSet = CreateDefaultSubobject<UMagicSwordAttributeSet>("AttributeSet");

	
}

void AEnemyMagicCharacterBase::HighLightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEP_RED);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEP_RED);
}

void AEnemyMagicCharacterBase::UnHighLightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}

void AEnemyMagicCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	AbilitySystemComponent->InitAbilityActorInfo(this,this);
	
}
