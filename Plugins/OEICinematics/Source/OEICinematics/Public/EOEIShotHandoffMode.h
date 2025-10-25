#pragma once
#include "CoreMinimal.h"
#include "EOEIShotHandoffMode.generated.h"

UENUM(BlueprintType)
enum class EOEIShotHandoffMode : uint8 {
    Unspecified,
    Ideal,
    Current,
    CurrentWithVelocity,
};

