#pragma once
#include "CoreMinimal.h"
#include "ECompanionCombatAbilityTargetType.generated.h"

UENUM(BlueprintType)
enum class ECompanionCombatAbilityTargetType : uint8 {
    Player,
    PlayerAimTarget,
};

