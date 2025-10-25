#pragma once
#include "CoreMinimal.h"
#include "EStationaryRotateTarget.generated.h"

UENUM(BlueprintType)
enum class EStationaryRotateTarget : uint8 {
    None,
    NextPathCorner,
    CurrentTarget,
};

