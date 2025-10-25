#pragma once
#include "CoreMinimal.h"
#include "EGripStyle.generated.h"

UENUM(BlueprintType)
enum class EGripStyle : uint8 {
    None,
    OneHanded,
    TwoHanded,
};

