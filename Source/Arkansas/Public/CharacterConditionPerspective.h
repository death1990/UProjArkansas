#pragma once
#include "CoreMinimal.h"
#include "CharacterCondition.h"
#include "CharacterConditionPerspective.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCharacterConditionPerspective : public UCharacterCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstPerson;
    
public:
    UCharacterConditionPerspective();

};

