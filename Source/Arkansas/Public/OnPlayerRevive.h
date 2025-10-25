#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnPlayerRevive.generated.h"

class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerRevive : public UEventListener {
    GENERATED_BODY()
public:
    UOnPlayerRevive();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRevive(AIndianaCharacter* InActor, bool bDebug);
    
};

