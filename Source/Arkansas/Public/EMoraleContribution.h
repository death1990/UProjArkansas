#pragma once
#include "CoreMinimal.h"
#include "EMoraleContribution.generated.h"

UENUM(BlueprintType)
enum class EMoraleContribution : uint8 {
    Low,
    Medium,
    High,
    Custom,
};

