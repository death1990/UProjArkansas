#pragma once
#include "CoreMinimal.h"
#include "EWidgetLifetimeState.generated.h"

UENUM(BlueprintType)
enum class EWidgetLifetimeState : uint8 {
    Normal,
    TransitioningToShutdown,
    Shutdown,
};

