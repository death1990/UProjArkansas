#pragma once
#include "CoreMinimal.h"
#include "ETraitCategory.generated.h"

UENUM(BlueprintType)
enum class ETraitCategory : uint8 {
    EMental,
    ESocial,
    EPhysical,
    INVALID,
};

