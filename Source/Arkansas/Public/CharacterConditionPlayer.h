#pragma once
#include "CoreMinimal.h"
#include "CharacterCondition.h"
#include "CharacterConditionPlayer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCharacterConditionPlayer : public UCharacterCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustBePlayer;
    
public:
    UCharacterConditionPlayer();

};

