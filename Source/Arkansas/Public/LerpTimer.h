#pragma once
#include "CoreMinimal.h"
#include "LerpTimerTickDelegate.h"
#include "LerpTimer.generated.h"

USTRUCT(BlueprintType)
struct FLerpTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLerpTimerTick TickDelegate;
    
    ARKANSAS_API FLerpTimer();
};

