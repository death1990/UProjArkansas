#pragma once
#include "CoreMinimal.h"
#include "ESkill.generated.h"

UENUM(BlueprintType)
enum class ESkill : uint8 {
    Melee,
    Guns,
    Sneak,
    Lockpick,
    Engineering,
    Explosives,
    Hack,
    Medical,
    Science,
    Observation,
    Speech,
    Leadership,
    HandGuns,
    LongGuns,
    HeavyWeapons,
    LightMelee,
    HeavyMelee,
    Persuade,
    Lie,
    Intimidate,
    Dodge,
    Block,
    Inspiration,
    Determination,
    Count,
    Invalid,
};

