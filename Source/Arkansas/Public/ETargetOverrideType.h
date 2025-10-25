#pragma once
#include "CoreMinimal.h"
#include "ETargetOverrideType.generated.h"

UENUM(BlueprintType)
enum class ETargetOverrideType : uint8 {
    None,
    Taunt,
    CommandAttack,
    CommandCalledShot,
};

