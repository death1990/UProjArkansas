#pragma once
#include "CoreMinimal.h"
#include "EAudioLogPlayState.generated.h"

UENUM(BlueprintType)
enum class EAudioLogPlayState : uint8 {
    Stopped,
    Playing,
    PausedByGame,
    PausedByPlayer,
};

