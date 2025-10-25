#pragma once
#include "CoreMinimal.h"
#include "EGBInvestigatePairEventType.generated.h"

UENUM(BlueprintType)
enum class EGBInvestigatePairEventType : uint8 {
    InitialResponse,
    RepeatResponseNear,
    RepeatResponseFar,
    DoneResponse,
};

