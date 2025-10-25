#pragma once
#include "CoreMinimal.h"
#include "EPathBlockedType.generated.h"

UENUM(BlueprintType)
enum class EPathBlockedType : uint8 {
    None,
    Stuck,
    Lost,
    Destination,
};

