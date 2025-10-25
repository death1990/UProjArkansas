#pragma once
#include "CoreMinimal.h"
#include "DamageMultipliers.generated.h"

USTRUCT(BlueprintType)
struct FDamageMultipliers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageThresholdMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageResistanceMultiplier;
    
    ARKANSAS_API FDamageMultipliers();
};

