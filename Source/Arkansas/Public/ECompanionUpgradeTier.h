#pragma once
#include "CoreMinimal.h"
#include "ECompanionUpgradeTier.generated.h"

UENUM(BlueprintType)
enum class ECompanionUpgradeTier : uint8 {
    None,
    Common,
    Elite,
};

