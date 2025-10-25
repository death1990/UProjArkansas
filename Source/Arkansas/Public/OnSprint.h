#pragma once
#include "CoreMinimal.h"
#include "ESprintEventType.h"
#include "EventListener.h"
#include "OnSprint.generated.h"

class UIndianaCharMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnSprint : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESprintEventType SprintEventType;
    
public:
    UOnSprint();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSprint(UIndianaCharMovementComponent* MovementComponent);
    
};

