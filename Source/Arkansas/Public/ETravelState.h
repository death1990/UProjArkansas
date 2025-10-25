#pragma once
#include "CoreMinimal.h"
#include "ETravelState.generated.h"

UENUM(BlueprintType)
enum class ETravelState : uint8 {
    NotTraveling,
    SeamlessLeaving,
    SeamlessInTransition,
    SeamlessArriving,
    BlockingInTransition,
};

