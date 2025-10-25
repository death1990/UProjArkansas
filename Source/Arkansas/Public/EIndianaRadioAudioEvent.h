#pragma once
#include "CoreMinimal.h"
#include "EIndianaRadioAudioEvent.generated.h"

UENUM(BlueprintType)
enum class EIndianaRadioAudioEvent : uint8 {
    Invalid,
    Intro,
    Outro,
    CommercialBreak,
    Song,
    Count,
};

