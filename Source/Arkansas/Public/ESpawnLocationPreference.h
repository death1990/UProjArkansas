#pragma once
#include "CoreMinimal.h"
#include "ESpawnLocationPreference.generated.h"

UENUM(BlueprintType)
enum class ESpawnLocationPreference : uint8 {
    Forward,
    ForwardLeft,
    ForwardRight,
    Left,
    Right,
    Behind,
    BehindLeft,
    BehindRight,
};

