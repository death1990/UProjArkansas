#pragma once
#include "CoreMinimal.h"
#include "EFiringPatternType.generated.h"

UENUM(BlueprintType)
enum class EFiringPatternType : uint8 {
    Default,
    Preset,
    Custom,
};

