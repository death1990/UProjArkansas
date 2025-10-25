#pragma once
#include "CoreMinimal.h"
#include "EIndianaRadioStationAudioEvent.generated.h"

UENUM(BlueprintType)
enum class EIndianaRadioStationAudioEvent : uint8 {
    Invalid,
    StartUp,
    InactiveToBuffer,
    BufferToActive,
    ActiveToBuffer,
    BufferToInactive,
    InactiveToActive,
    ActiveToInactive,
    ShutDown,
    ResumeSong,
    PauseSong,
    Kill,
    Count,
};

