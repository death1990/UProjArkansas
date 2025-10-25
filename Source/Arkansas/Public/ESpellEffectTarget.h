#pragma once
#include "CoreMinimal.h"
#include "ESpellEffectTarget.generated.h"

UENUM(BlueprintType)
enum class ESpellEffectTarget : uint8 {
    Self,
    Player,
    Companions,
    Target,
    Party,
    AOE,
    Cone,
    RandomCompanion,
    RandomCompanionOnCooldown,
    OtherCompanion,
    CharactersDetectingPlayer,
    RandomCharacterInAOE,
    PlayerTarget,
    NearestEnemyDetectedByCompanion,
    Count,
    Invalid,
};

