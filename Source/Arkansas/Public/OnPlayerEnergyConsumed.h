#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnPlayerEnergyConsumed.generated.h"

class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerEnergyConsumed : public UEventListener {
    GENERATED_BODY()
public:
    UOnPlayerEnergyConsumed();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnergyConsumed(AIndianaCharacter* Character, float ConsumedAmount);
    
};

