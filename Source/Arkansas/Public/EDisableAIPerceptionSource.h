#pragma once
#include "CoreMinimal.h"
#include "EDisableAIPerceptionSource.generated.h"

UENUM(BlueprintType)
enum class EDisableAIPerceptionSource : uint8 {
    None,
    Stasis,
    Dormancy,
};

