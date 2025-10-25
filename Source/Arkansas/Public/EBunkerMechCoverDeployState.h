#pragma once
#include "CoreMinimal.h"
#include "EBunkerMechCoverDeployState.generated.h"

UENUM(BlueprintType)
enum class EBunkerMechCoverDeployState : uint8 {
    Retracted,
    Anticipate,
    Deployed,
};

