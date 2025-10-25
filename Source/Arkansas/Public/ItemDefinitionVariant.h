#pragma once
#include "CoreMinimal.h"
#include "AccessoryItemDefinition.h"
#include "AmmoItemDefinition.h"
#include "ArmorModArmoringItemDefinition.h"
#include "ArmorModDampeningItemDefinition.h"
#include "ArmorModDecalItemDefinition.h"
#include "ArmorModDyeItemDefinition.h"
#include "ArmorModResistanceItemDefinition.h"
#include "ArmorModUtilityItemDefinition.h"
#include "ArmorSetItemDefinition.h"
#include "AudioLogItemDefinition.h"
#include "BaseItemDefinition.h"
#include "CardCollectibleItemDefinition.h"
#include "CollectibleItemDefinition.h"
#include "CompanionItemDefinition.h"
#include "CurrencyItmDefinition.h"
#include "EItemType.h"
#include "GadgetItemDefinition.h"
#include "HelmetItemDefinition.h"
#include "PetItemDefinition.h"
#include "QuestItmDefinition.h"
#include "RegionCollectibleItemDefinition.h"
#include "ResourceItmDefinition.h"
#include "ThrowableItemDefinition.h"
#include "UndersuitItemDefinition.h"
#include "WeaponItemDefinition.h"
#include "WeaponModItemDefinition.h"
#include "ItemDefinitionVariant.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FItemDefinitionVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponItemDefinition WeaponItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorSetItemDefinition ArmorSetItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmmoItemDefinition AmmoItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyItmDefinition CurrencyItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceItmDefinition ResourceItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestItmDefinition QuestItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModItemDefinition WeaponModItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelmetItemDefinition HelmetItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorModArmoringItemDefinition ArmorModArmoringItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorModUtilityItemDefinition ArmorModUtilityItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorModResistanceItemDefinition ArmorModResistanceItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorModDampeningItemDefinition ArmorModDampeningItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorModDyeItemDefinition ArmorModDyeItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorModDecalItemDefinition ArmorModDecalItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseItemDefinition MedKitItemDefinitionDeprecated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetItemDefinition GadgetItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowableItemDefinition ThrowableItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUndersuitItemDefinition UndersuitItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccessoryItemDefinition AccessoryItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioLogItemDefinition AudioLogItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompanionItemDefinition CompanionItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCardCollectibleItemDefinition CardCollectibleItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegionCollectibleItemDefinition RegionCollectibleItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectibleItemDefinition CollectibleItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPetItemDefinition PetItemDefinition;
    
    FItemDefinitionVariant();
};

