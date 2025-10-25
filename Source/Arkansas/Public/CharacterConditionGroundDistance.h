#pragma once
#include "CoreMinimal.h"
#include "CharacterCondition.h"
#include "CharacterConditionGroundDistance.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCharacterConditionGroundDistance : public UCharacterCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGroundDistance;
    
public:
    UCharacterConditionGroundDistance();

};

