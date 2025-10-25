#pragma once
#include "CoreMinimal.h"
#include "EAutoSaveType.generated.h"

UENUM(BlueprintType)
enum class EAutoSaveType : uint8 {
    Default,
    Travel,
    Scripted,
};

