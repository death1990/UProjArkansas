#pragma once
#include "CoreMinimal.h"
#include "WeightedEffect.generated.h"

class UEventEffect;

USTRUCT(BlueprintType)
struct FWeightedEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEventEffect* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ARKANSAS_API FWeightedEffect();
};

