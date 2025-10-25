#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnCompanionRevive.generated.h"

class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnCompanionRevive : public UEventListener {
    GENERATED_BODY()
public:
    UOnCompanionRevive();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCompanionRevive(AIndianaCharacter* InCharacter, AIndianaCharacter* TargetCharacter);
    
};

