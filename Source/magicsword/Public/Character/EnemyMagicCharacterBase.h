// Copyright Edward

#pragma once

#include "CoreMinimal.h"
#include "Character/MagicCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "EnemyMagicCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class MAGICSWORD_API AEnemyMagicCharacterBase : public AMagicCharacterBase,public IEnemyInterface
{
	GENERATED_BODY()
public:
	AEnemyMagicCharacterBase();

	/**Enemy Interface */
	virtual void HighLightActor() override;
	virtual void UnHighLightActor() override;
	/**Enemy Interface */

protected:
	virtual void BeginPlay() override;

};
