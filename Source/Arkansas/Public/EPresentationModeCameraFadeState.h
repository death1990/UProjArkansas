#pragma once
#include "CoreMinimal.h"
#include "EPresentationModeCameraFadeState.generated.h"

UENUM(BlueprintType)
enum class EPresentationModeCameraFadeState : uint8 {
    Inactive,
    Initialized,
    FadingOut,
    HoldingFade,
    ReadyForFadeIn,
    FadingIn,
    Complete,
};

