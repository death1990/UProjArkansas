#pragma once
#include "CoreMinimal.h"
#include "EOEIVolumeInitializationState.generated.h"

UENUM(BlueprintType)
enum class EOEIVolumeInitializationState : uint8 {
    NotInitialized,
    Initializing,
    Initialized,
};

