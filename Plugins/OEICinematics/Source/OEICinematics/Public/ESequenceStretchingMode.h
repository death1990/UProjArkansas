#pragma once
#include "CoreMinimal.h"
#include "ESequenceStretchingMode.generated.h"

UENUM(BlueprintType)
enum class ESequenceStretchingMode : uint8 {
    None,
    StretchToMatchLipsync,
};

