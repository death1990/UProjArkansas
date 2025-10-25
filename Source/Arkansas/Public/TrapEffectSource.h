#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "TrapEffectSource.generated.h"

class AIndianaCharacter;

UINTERFACE(Blueprintable, MinimalAPI)
class UTrapEffectSource : public UInterface {
    GENERATED_BODY()
};

class ITrapEffectSource : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTriggerUntripped();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTriggerTripped();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTriggerDisarmed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTriggerArmed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceivePreDeploy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDeployOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCurrentActivators(TArray<AIndianaCharacter*>& OutActivators);
    
};

