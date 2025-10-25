#pragma once
#include "CoreMinimal.h"
#include "EParticleSpawnType.generated.h"

UENUM(BlueprintType)
enum class EParticleSpawnType : uint8 {
    AtStepLocation,
    AtSocketLocation,
    AttachedToSocket,
};

