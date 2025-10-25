#pragma once
#include "CoreMinimal.h"
#include "EFireAnimMode.generated.h"

UENUM(BlueprintType)
enum class EFireAnimMode : uint8 {
    Default,
    Sequential,
    SpecificShotIndexing,
    Random,
};

