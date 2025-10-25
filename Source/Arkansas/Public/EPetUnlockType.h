#pragma once
#include "CoreMinimal.h"
#include "EPetUnlockType.generated.h"

UENUM(BlueprintType)
enum class EPetUnlockType : uint8 {
    Scripting,
    Entitlement,
};

