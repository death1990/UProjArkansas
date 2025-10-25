#pragma once
#include "CoreMinimal.h"
#include "EStatClampingMethod.generated.h"

UENUM(BlueprintType)
enum class EStatClampingMethod : uint8 {
    None,
    ClampTo0,
    Custom,
    Attribute,
    Skill,
};

