#pragma once
#include "CoreMinimal.h"
#include "EPlayerAudioDetectionState.generated.h"

UENUM(BlueprintType)
enum class EPlayerAudioDetectionState : uint8 {
    Undetected,
    Danger,
    Combat,
};

