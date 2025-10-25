#pragma once
#include "CoreMinimal.h"
#include "ECrowdType.generated.h"

UENUM(BlueprintType)
enum class ECrowdType : uint8 {
    Any,
    Mover,
    NonMover,
    FavorMover,
    FavorNonMover,
};

