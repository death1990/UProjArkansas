#pragma once
#include "CoreMinimal.h"
#include "ECompanionTier.h"
#include "ECompanionTierChoice.h"
#include "ESpecialObsidianID.h"
#include "DCLCompanionData.generated.h"

class UDebugCharacterLoadoutEquipmentAsset;
class UDebugCharacterLoadoutPerkAsset;

USTRUCT(BlueprintType)
struct FDCLCompanionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpecialObsidianID CompanionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDebugCharacterLoadoutPerkAsset> Perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearExistingPerksOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDebugCharacterLoadoutEquipmentAsset> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearExistingEquipmentOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECompanionTier> CompanionTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECompanionTierChoice> WeaponUpgradeChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECompanionTierChoice> ArmorUpgradeChoice;
    
    ARKANSAS_API FDCLCompanionData();
};

