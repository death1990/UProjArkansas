#pragma once
#include "CoreMinimal.h"
#include "ECameraPerspective.generated.h"

UENUM(BlueprintType)
enum class ECameraPerspective : uint8 {
    FirstPerson,
    ThirdPersonNear,
    ThirdPersonFar,
    Count,
};

