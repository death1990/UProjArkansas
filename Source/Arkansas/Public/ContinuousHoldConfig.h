#pragma once
#include "CoreMinimal.h"
#include "ContinuousHoldConfig.generated.h"

USTRUCT(BlueprintType)
struct FContinuousHoldConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowContinuousHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDecreasePerHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccelerateDecrease;
    
    ARKANSAS_API FContinuousHoldConfig();
};

