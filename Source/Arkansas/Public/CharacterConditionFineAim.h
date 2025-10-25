#pragma once
#include "CoreMinimal.h"
#include "CharacterCondition.h"
#include "ETrinary.h"
#include "CharacterConditionFineAim.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UCharacterConditionFineAim : public UCharacterCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrinary CanFineAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrinary WantsToFineAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrinary IsFineAiming;
    
public:
    UCharacterConditionFineAim();

};

