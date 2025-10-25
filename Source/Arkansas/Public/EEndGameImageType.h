#pragma once
#include "CoreMinimal.h"
#include "EEndGameImageType.generated.h"

UENUM(BlueprintType)
enum class EEndGameImageType : uint8 {
    Invalid,
    SkipHopeToSun,
    BoardPath,
    ScientistPath,
};

