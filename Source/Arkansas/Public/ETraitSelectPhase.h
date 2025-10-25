#pragma once
#include "CoreMinimal.h"
#include "ETraitSelectPhase.generated.h"

UENUM(BlueprintType)
enum class ETraitSelectPhase : uint8 {
    FirstPositive,
    SecondPositive,
    Negative,
    Confirmation,
};

