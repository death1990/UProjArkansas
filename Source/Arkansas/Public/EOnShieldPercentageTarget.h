#pragma once
#include "CoreMinimal.h"
#include "EOnShieldPercentageTarget.generated.h"

UENUM(BlueprintType)
enum class EOnShieldPercentageTarget : uint8 {
    Self,
    Player,
    Companions,
};

