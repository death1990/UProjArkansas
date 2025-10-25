#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OwNavigationSystemSettings.generated.h"

class UNavLinkProfile;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class ARKANSAS_API UOwNavigationSystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UNavLinkProfile>> AgentDefaultNavLinkProfiles;
    
public:
    UOwNavigationSystemSettings();

};

