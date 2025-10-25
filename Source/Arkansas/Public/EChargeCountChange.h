#pragma once
#include "CoreMinimal.h"
#include "EChargeCountChange.generated.h"

UENUM(BlueprintType)
enum class EChargeCountChange : uint8 {
    Add,
    Override,
};

