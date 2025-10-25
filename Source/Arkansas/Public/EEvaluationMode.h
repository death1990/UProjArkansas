#pragma once
#include "CoreMinimal.h"
#include "EEvaluationMode.generated.h"

UENUM(BlueprintType)
enum class EEvaluationMode : uint8 {
    All,
    Any,
    One,
    None,
};

