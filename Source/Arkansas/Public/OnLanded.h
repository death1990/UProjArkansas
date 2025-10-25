#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnLanded.generated.h"

class UIndianaCharMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnLanded : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFallDistance;
    
public:
    UOnLanded();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLanded(UIndianaCharMovementComponent* InMovementComponent, float FallDistance);
    
};

