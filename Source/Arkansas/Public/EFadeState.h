#pragma once
#include "CoreMinimal.h"
#include "EFadeState.generated.h"

UENUM(BlueprintType)
enum class EFadeState : uint8 {
    NotStarted,
    VisibilityOn,
    VisibilityOff,
    VisibiltySizeFinalized,
    Active,
    Infinite,
    Fading,
    Finished,
    NumFadeStates,
};

