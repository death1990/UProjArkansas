#pragma once
#include "CoreMinimal.h"
#include "EDodgeDirection.h"
#include "EventListener.h"
#include "OnDodgeEvent.generated.h"

class UIndianaCharMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnDodgeEvent : public UEventListener {
    GENERATED_BODY()
public:
    UOnDodgeEvent();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDodge(UIndianaCharMovementComponent* InMovementComponent, EDodgeDirection Direction);
    
};

