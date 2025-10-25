#pragma once
#include "CoreMinimal.h"
#include "EMeshPerspective.generated.h"

UENUM(BlueprintType)
enum class EMeshPerspective : uint8 {
    Current,
    FirstPerson,
    ThirdPerson,
};

