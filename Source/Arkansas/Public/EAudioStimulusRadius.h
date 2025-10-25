#pragma once
#include "CoreMinimal.h"
#include "EAudioStimulusRadius.generated.h"

UENUM(BlueprintType)
enum class EAudioStimulusRadius : uint8 {
    Invalid,
    Small,
    Medium,
    Large,
};

