#pragma once
#include "CoreMinimal.h"
#include "ECategory.generated.h"

UENUM(BlueprintType)
enum class ECategory : uint8 {
    None,
    Graphics,
    Audio,
    Control,
    Gameplay,
    UI,
    Debug,
    Accessibility,
    Count,
};

