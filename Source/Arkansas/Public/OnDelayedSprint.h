#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnDelayedSprint.generated.h"

class UIndianaCharMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnDelayedSprint : public UEventListener {
    GENERATED_BODY()
public:
    UOnDelayedSprint();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDelayedSprint(UIndianaCharMovementComponent* MovementComponent);
    
};

