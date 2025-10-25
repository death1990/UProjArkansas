#pragma once
#include "CoreMinimal.h"
#include "EItemSorting.generated.h"

UENUM(BlueprintType)
enum class EItemSorting : uint8 {
    CustomSort,
    Alphabetical,
    Value,
    Weight,
    ValueToWeight,
    ItemCount,
    DamageRating,
    WeaponType,
    ArmorRating,
    ArmorType,
    DamageType,
    ThrowableDamage,
    ThrowableCount,
    NourishmentAmount,
    ResourcesFirst,
    RangedMeleeArmorMod,
    ModificationsFirst,
    MaterialsFirst,
    QuestsFirst,
    CollectiblesFirst,
    RecipesFirst,
    ByJunkType,
};

