#pragma once
#include "CoreMinimal.h"
#include "EClearThreatTarget.generated.h"

UENUM()
enum class EClearThreatTarget : int32 {
    Applier,
    Companions,
    Player,
};

