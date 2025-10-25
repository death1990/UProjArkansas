#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OEITickManagerSettings.generated.h"

class UOEITickManager;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class OEITICKMANAGER_API UOEITickManagerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOEITickManager> TickManagerClass;
    
    UOEITickManagerSettings();

};

