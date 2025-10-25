#pragma once
#include "CoreMinimal.h"
#include "ETargetRelationship.generated.h"

UENUM(BlueprintType)
enum class ETargetRelationship : uint8 {
    Friendly,
    Neutral,
    Hostile,
    PacifistHostile,
};

