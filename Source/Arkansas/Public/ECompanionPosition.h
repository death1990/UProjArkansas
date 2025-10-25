#pragma once
#include "CoreMinimal.h"
#include "ECompanionPosition.generated.h"

UENUM(BlueprintType)
enum class ECompanionPosition : uint8 {
    CompanionLeft,
    CompanionRight,
    NumCompanionPositions,
};

