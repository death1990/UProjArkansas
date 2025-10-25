#pragma once
#include "CoreMinimal.h"
#include "ArmorSetItemDefinition.h"
#include "HelmetItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "UndersuitItemDefinition.h"
#include "WeaponItemDefinition.h"
#include "DCLEquipmentData.generated.h"

class UConsumableItem;

USTRUCT(BlueprintType)
struct FDCLEquipmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifyWeaponSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponItemDefinition> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelmetItemDefinition Helmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorSetItemDefinition Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUndersuitItemDefinition Undersuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UConsumableItem>> Primers;
    
    ARKANSAS_API FDCLEquipmentData();
};

