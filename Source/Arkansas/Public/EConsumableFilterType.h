#pragma once
#include "CoreMinimal.h"
#include "EConsumableFilterType.generated.h"

UENUM(BlueprintType)
enum class EConsumableFilterType : uint8 {
    Ammo,
    Throwable,
    Medical,
};

