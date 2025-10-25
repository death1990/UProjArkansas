#pragma once
#include "CoreMinimal.h"
#include "EventEffect.h"
#include "WeightedEffect.h"
#include "RandomEventEffects.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URandomEventEffects : public UEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedEffect> Effects;
    
public:
    URandomEventEffects();

};

