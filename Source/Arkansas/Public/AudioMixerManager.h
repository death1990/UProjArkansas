#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioMixerManager.generated.h"

class UAudioMixerManager;

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UAudioMixerManager : public UObject {
    GENERATED_BODY()
public:
    UAudioMixerManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAudioMixerManager* GetAudioMixerManagerBP();
    
};

