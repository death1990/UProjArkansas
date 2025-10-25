#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnMaxPositiveFactions.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnMaxPositiveFactions : public UEventListener {
    GENERATED_BODY()
public:
    UOnMaxPositiveFactions();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMaxPositiveFactions();
    
};

