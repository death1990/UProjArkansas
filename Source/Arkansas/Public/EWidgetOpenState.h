#pragma once
#include "CoreMinimal.h"
#include "EWidgetOpenState.generated.h"

UENUM(BlueprintType)
enum class EWidgetOpenState : uint8 {
    Maximized,
    TransitioningToMinimized,
    Minimized,
    TransitioningToMaximized,
};

