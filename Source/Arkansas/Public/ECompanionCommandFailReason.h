#pragma once
#include "CoreMinimal.h"
#include "ECompanionCommandFailReason.generated.h"

UENUM(BlueprintType)
enum class ECompanionCommandFailReason : uint8 {
    NotInRange,
    LackCompanionAbilityCharge,
    Incapacitated,
    NoTarget,
};

