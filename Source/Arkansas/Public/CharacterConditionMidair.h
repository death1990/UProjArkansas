#pragma once
#include "CoreMinimal.h"
#include "CharacterCondition.h"
#include "CharacterConditionMidair.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCharacterConditionMidair : public UCharacterCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMidair;
    
public:
    UCharacterConditionMidair();

};

