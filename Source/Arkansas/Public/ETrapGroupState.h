#pragma once
#include "CoreMinimal.h"
#include "ETrapGroupState.generated.h"

UENUM(BlueprintType)
enum class ETrapGroupState : uint8 {
    Active,
    Inactive,
    Disarmed,
};

