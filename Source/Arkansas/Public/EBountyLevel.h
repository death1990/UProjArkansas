#pragma once
#include "CoreMinimal.h"
#include "EBountyLevel.generated.h"

UENUM(BlueprintType)
enum class EBountyLevel : uint8 {
    None,
    Hooligan,
    Outlaw,
    Count,
};

