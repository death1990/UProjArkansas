#pragma once
#include "CoreMinimal.h"
#include "EProjectileSpawnDirection.generated.h"

UENUM()
enum class EProjectileSpawnDirection : int32 {
    WorldUp,
    WorldDown,
    ImpactNormal,
    VelocityNormal,
};

