#pragma once
#include "CoreMinimal.h"
#include "EDependentBehaviorType.generated.h"

UENUM(BlueprintType)
enum class EDependentBehaviorType : uint8 {
    None,
    Hide,
    Show,
    Disabled,
};

