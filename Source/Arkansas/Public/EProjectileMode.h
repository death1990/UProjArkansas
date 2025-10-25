#pragma once
#include "CoreMinimal.h"
#include "EProjectileMode.generated.h"

UENUM(BlueprintType)
enum class EProjectileMode : uint8 {
    Active,
    Simulated,
    Passive,
    Invalid,
};

