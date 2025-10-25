#pragma once
#include "CoreMinimal.h"
#include "EDamageFlags.generated.h"

UENUM()
enum class EDamageFlags : uint32 {
    None,
    Critical,
    Armageddon,
    Melee = 4,
    CalledShot = 8,
    Stealth = 16,
    NoDamage = 32,
    Blocked = 64,
    Range = 128,
    Reflected = 256,
    WeakSpot = 512,
    KillingBlow = 1024,
    AllDamageTypes = 2048,
    PowerAttack = 4096,
    IgnorePostArmorMult = 8192,
    SweepAttack = 16384,
    FriendlyFire = 32768,
    TacticalTimeDilation = 65536,
    ScienceWeapon = 131072,
    IgnoreDTDR = 262144,
    Suicide = 524288,
    HeadShot = 1048576,
    ApplyOnTick = 2097152,
    Spell = 4194304,
    Falling = 8388608,
    ForceMaxPossibleDamage = 16777216,
    PreventRevival = 33554432,
    NoDmgTypeOnHitSpell = 67108864,
    Tracer = 134217728,
    MaxRadiation = 268435456,
    Negated = 536870912,
    DestructibleBodyPart = 1073741824,
    Rift = 2147483648,
};

