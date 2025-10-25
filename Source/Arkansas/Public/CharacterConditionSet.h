#pragma once
#include "CoreMinimal.h"
#include "CharacterCondition.h"
#include "EEvaluationMode.h"
#include "CharacterConditionSet.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCharacterConditionSet : public UCharacterCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvaluationMode MustBeTrue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCharacterCondition*> SubConditions;
    
public:
    UCharacterConditionSet();

};

