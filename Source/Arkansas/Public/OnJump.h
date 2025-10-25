#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnJump.generated.h"

class UIndianaCharMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnJump : public UEventListener {
    GENERATED_BODY()
public:
    UOnJump();

protected:
    UFUNCTION(BlueprintCallable)
    void OnJump(UIndianaCharMovementComponent* MovementComponent);
    
};

