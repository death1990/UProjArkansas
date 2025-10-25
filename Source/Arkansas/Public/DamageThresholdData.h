#pragma once
#include "CoreMinimal.h"
#include "DamageThresholdData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FDamageThresholdData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DamageTexture;
    
    ARKANSAS_API FDamageThresholdData();
};

