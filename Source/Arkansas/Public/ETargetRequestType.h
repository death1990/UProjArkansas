#pragma once
#include "CoreMinimal.h"
#include "ETargetRequestType.generated.h"

UENUM(BlueprintType)
enum class ETargetRequestType : uint8 {
    None,
    Clear,
    Fresh,
    FirstTarget,
    Override,
    ClearOverride,
    Lost,
    Untargetable,
    Threat,
    Unreachable,
    Restore,
    LoS,
};

