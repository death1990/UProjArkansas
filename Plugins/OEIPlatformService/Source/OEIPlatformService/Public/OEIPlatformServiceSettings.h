#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OEIPlatformServiceSettings.generated.h"

class UBattleNetStoreConfig;
class UEntitlementIDMapping;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OEIPLATFORMSERVICE_API UOEIPlatformServiceSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEntitlementIDMapping> EntitlementIDMapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBattleNetStoreConfig> BattleNetConfig;
    
    UOEIPlatformServiceSettings();

};

