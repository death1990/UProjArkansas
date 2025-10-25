#pragma once
#include "CoreMinimal.h"
#include "EHolsterState.generated.h"

UENUM(BlueprintType)
enum class EHolsterState : uint8 {
    Holstered,
    Holstering,
    Unholstering,
    Unholstered,
};

