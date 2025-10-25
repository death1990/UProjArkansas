#pragma once
#include "CoreMinimal.h"
#include "EStageMarkAssignmentType.generated.h"

UENUM(BlueprintType)
enum class EStageMarkAssignmentType : uint8 {
    Walk,
    Teleport,
    Unaligned,
    Run,
};

