#pragma once
#include "CoreMinimal.h"
#include "ETurretDeployState.generated.h"

UENUM(BlueprintType)
enum class ETurretDeployState : uint8 {
    Retracted,
    Deploying,
    Deployed,
    Retracting,
};

