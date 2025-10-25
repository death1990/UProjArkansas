#pragma once
#include "CoreMinimal.h"
#include "EOCLResult.generated.h"

UENUM(BlueprintType)
enum class EOCLResult : uint8 {
    Success,
    Failed_Locked,
    Failed_LockedPermanent,
    Failed_Sealed,
    Failed_IsOpening,
    Failed_IsClosing,
    Failed_Barred,
    Pending_Lockpicking,
    Failed_Jammed,
};

