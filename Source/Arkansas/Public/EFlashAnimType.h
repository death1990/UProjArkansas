#pragma once
#include "CoreMinimal.h"
#include "EFlashAnimType.generated.h"

UENUM(BlueprintType)
enum class EFlashAnimType : uint8 {
    Pulse,
    HighContrastFlash,
    QuickFlash,
};

