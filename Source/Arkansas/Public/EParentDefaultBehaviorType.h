#pragma once
#include "CoreMinimal.h"
#include "EParentDefaultBehaviorType.generated.h"

UENUM(BlueprintType)
enum class EParentDefaultBehaviorType : uint8 {
    Idle,
    Wander,
};

