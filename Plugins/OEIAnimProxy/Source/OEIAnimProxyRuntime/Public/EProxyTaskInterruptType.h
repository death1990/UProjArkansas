#pragma once
#include "CoreMinimal.h"
#include "EProxyTaskInterruptType.generated.h"

UENUM(BlueprintType)
enum class EProxyTaskInterruptType : uint8 {
    GenericCancel,
    Combat,
    Teleport,
    ForceEnd,
};

