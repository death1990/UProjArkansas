#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnDelayedCrouch.generated.h"

class UIndianaCharMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnDelayedCrouch : public UEventListener {
    GENERATED_BODY()
public:
    UOnDelayedCrouch();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDelayedCrouch(UIndianaCharMovementComponent* MovementComponent);
    
};

