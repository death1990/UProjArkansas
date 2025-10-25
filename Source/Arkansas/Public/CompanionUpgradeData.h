#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CompanionUpgrade.h"
#include "CompanionUpgradeData.generated.h"

UCLASS(Blueprintable)
class UCompanionUpgradeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FCompanionUpgrade> CompanionUpgrades;
    
    UCompanionUpgradeData();

};

