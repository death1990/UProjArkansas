#pragma once
#include "CoreMinimal.h"
#include "EActorSpawnImpactType.generated.h"

UENUM(BlueprintType)
enum class EActorSpawnImpactType : uint8 {
    Default,
    NonCharactersOnly,
    CharactersOnly,
};

