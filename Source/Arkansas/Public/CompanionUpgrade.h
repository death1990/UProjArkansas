#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CompanionUpgrade.generated.h"

class UArmorModItem;
class UHelmet;
class UResourceItem;
class UWeaponMod;

USTRUCT(BlueprintType)
struct FCompanionUpgrade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UResourceItem> UpgradeKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWeaponMod>> WeaponUpgradeChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UArmorModItem>> ArmorUpgradeChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UArmorModItem>> HelmetUpgradeChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UHelmet>> HelmetReplacementChoices;
    
    ARKANSAS_API FCompanionUpgrade();
};

