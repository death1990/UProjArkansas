#pragma once
#include "CoreMinimal.h"
#include "ESeamlessTravelSubstate.generated.h"

UENUM(BlueprintType)
enum class ESeamlessTravelSubstate : uint8 {
    LoadingNewWorld,
    LoadingSubLevels,
    ReadyToTransition,
    Idle,
};

