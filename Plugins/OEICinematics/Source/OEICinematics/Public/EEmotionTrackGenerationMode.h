#pragma once
#include "CoreMinimal.h"
#include "EEmotionTrackGenerationMode.generated.h"

UENUM(BlueprintType)
enum class EEmotionTrackGenerationMode : uint8 {
    None,
    AR,
    AL,
};

