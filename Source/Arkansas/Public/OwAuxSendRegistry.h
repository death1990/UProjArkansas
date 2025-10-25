#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "OwAuxSendRegistry.generated.h"

class UAkAuxBus;
class UAkComponent;

UCLASS(Blueprintable)
class ARKANSAS_API UOwAuxSendRegistry : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UOwAuxSendRegistry();

    UFUNCTION(BlueprintCallable)
    void ToggleAuxSendRegistryDebug();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAuxSends(const TArray<int32>& RegistryKeys);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAuxSend(int32 RegistryKey);
    
    UFUNCTION(BlueprintCallable)
    void AddAuxSend_BP(const UAkComponent* InputAk, const UAkComponent* OutputAk, UAkAuxBus* AuxBus, float AuxSendVolume, bool bShouldMuteOutputBus);
    
};

