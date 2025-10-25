#pragma once
#include "CoreMinimal.h"
#include "EHUDWidgetVisibilityMode.generated.h"

UENUM(BlueprintType)
enum class EHUDWidgetVisibilityMode : uint8 {
    AlwaysOff,
    CombatOnly,
    EventTimedFade,
    AlwaysOn,
};

