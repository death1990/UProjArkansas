#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PhotoModeSettingsInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPhotoModeSettingsInterface : public UInterface {
    GENERATED_BODY()
};

class IPhotoModeSettingsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterWithPhotoModeSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterWithPhotoModeSubsystem();
    
};

