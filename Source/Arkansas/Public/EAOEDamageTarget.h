#pragma once
#include "CoreMinimal.h"
#include "EAOEDamageTarget.generated.h"

UENUM(BlueprintType)
enum class EAOEDamageTarget : uint8 {
    AllTargetsInAOE,
    RandomTargetsInAOE,
};

