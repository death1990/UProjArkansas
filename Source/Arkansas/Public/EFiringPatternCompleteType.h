#pragma once
#include "CoreMinimal.h"
#include "EFiringPatternCompleteType.generated.h"

UENUM(BlueprintType)
enum class EFiringPatternCompleteType : uint8 {
    FinishBehavior,
    FinishTask,
    Repeat,
};

