// Copyright Edward

#pragma once

#include "CoreMinimal.h"
#include "Character/MagicCharacterBase.h"
#include "PlayerMagicCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class MAGICSWORD_API APlayerMagicCharacterBase : public AMagicCharacterBase
{
	GENERATED_BODY()
public:
	APlayerMagicCharacterBase();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
private:
	void InitAbilityActorInfo();
};
