// Copyright Edward

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MagicCharacterBase.generated.h"

UCLASS(Abstract)
class MAGICSWORD_API AMagicCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	AMagicCharacterBase();

protected:

	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere,Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
