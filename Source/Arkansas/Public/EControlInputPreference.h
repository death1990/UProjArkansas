#pragma once
#include "CoreMinimal.h"
#include "EControlInputPreference.generated.h"

UENUM(BlueprintType)
enum class EControlInputPreference : uint8 {
    PressAndHold,
    PressToToggle,
};

