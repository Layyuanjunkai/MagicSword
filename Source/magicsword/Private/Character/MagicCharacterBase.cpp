// Copyright Edward


#include "Character/MagicCharacterBase.h"

// Sets default values
AMagicCharacterBase::AMagicCharacterBase()
{
 
	PrimaryActorTick.bCanEverTick = false;
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon -> SetupAttachment(GetMesh(),FName("WeaponHandSocket"));
	Weapon ->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* AMagicCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called when the game starts or when spawned
void AMagicCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}



