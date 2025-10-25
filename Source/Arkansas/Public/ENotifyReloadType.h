#pragma once
#include "CoreMinimal.h"
#include "ENotifyReloadType.generated.h"

UENUM(BlueprintType)
enum class ENotifyReloadType : uint8 {
    FullRefill,
    OneBullet,
};

