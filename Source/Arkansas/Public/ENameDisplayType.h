#pragma once
#include "CoreMinimal.h"
#include "ENameDisplayType.generated.h"

UENUM(BlueprintType)
enum class ENameDisplayType : uint8 {
    None,
    DisplayName,
    ObjectName,
};

