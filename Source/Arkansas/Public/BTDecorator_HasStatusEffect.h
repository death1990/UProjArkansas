#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "Templates/SubclassOf.h"
#include "BTDecorator_HasStatusEffect.generated.h"

class UStatusEffect;

UCLASS(Blueprintable)
class ARKANSAS_API UBTDecorator_HasStatusEffect : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustHaveAllEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffectsToCheck;
    
public:
    UBTDecorator_HasStatusEffect();

};

