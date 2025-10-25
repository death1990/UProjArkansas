#pragma once
#include "CoreMinimal.h"
#include "EOEINonVerbalDetection.generated.h"

UENUM(BlueprintType)
enum class EOEINonVerbalDetection : uint8 {
    ProjectDefault,
    NoDetection,
    Detect,
    Count,
};

