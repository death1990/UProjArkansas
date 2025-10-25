#pragma once
#include "CoreMinimal.h"
#include "ECheckLineOfSightResult.generated.h"

UENUM(BlueprintType)
enum class ECheckLineOfSightResult : uint8 {
    None,
    Partial,
    Full,
};

