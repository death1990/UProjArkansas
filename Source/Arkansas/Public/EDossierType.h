#pragma once
#include "CoreMinimal.h"
#include "EDossierType.generated.h"

UENUM(BlueprintType)
enum class EDossierType : uint8 {
    NPC,
    Faction,
    Location,
    Concept,
    EnemyType,
    Count,
};

