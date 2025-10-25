#pragma once
#include "CoreMinimal.h"
#include "ECarriageWallDir.generated.h"

UENUM(BlueprintType)
enum class ECarriageWallDir : uint8 {
    Front,
    Right,
    Back,
    Left,
    Count,
};

