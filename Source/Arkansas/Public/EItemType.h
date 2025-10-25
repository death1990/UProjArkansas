#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    Weapon,
    ArmorSet,
    Ammo,
    Currency,
    Resource,
    Quest,
    WeaponMod,
    Helmet,
    ArmorModArmoring,
    ArmorModUtility,
    ArmorModResistance,
    ArmorModDampening,
    MedKit,
    Gadget,
    Throwable,
    Undersuit,
    Accessory,
    ArmorModDye,
    ArmorModDecal,
    AudioLog,
    CompanionItem,
    CardCollectible,
    RegionCollectible,
    Collectible,
    PetItem,
    Count,
    Invalid,
};

