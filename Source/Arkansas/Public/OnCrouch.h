#pragma once
#include "CoreMinimal.h"
#include "ECrouchEventType.h"
#include "EventListener.h"
#include "OnCrouch.generated.h"

class UIndianaCharMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnCrouch : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrouchEventType CrouchEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnPlayerToggle;
    
public:
    UOnCrouch();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCrouch(UIndianaCharMovementComponent* MovementComponent, bool bPlayerToggled);
    
};

