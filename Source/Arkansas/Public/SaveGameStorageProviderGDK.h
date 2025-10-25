#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIPlatformService -ObjectName=EOEIPlatformServiceProvider -FallbackName=EOEIPlatformServiceProvider
#include "SaveGameStorageProvider.h"
#include "SaveGameStorageProviderGDK.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API USaveGameStorageProviderGDK : public USaveGameStorageProvider {
    GENERATED_BODY()
public:
    USaveGameStorageProviderGDK();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlatformServiceLoginStatusChanged(bool OldAvailability, bool NewAvailability, EOEIPlatformServiceProvider Provider);
    
};

