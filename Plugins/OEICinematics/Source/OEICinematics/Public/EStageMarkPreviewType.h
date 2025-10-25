#pragma once
#include "CoreMinimal.h"
#include "EStageMarkPreviewType.generated.h"

UENUM(BlueprintType)
enum class EStageMarkPreviewType : uint8 {
    Valid,
    PartiallyValid,
    Invalid,
    Suppressed,
    MAX,
};

