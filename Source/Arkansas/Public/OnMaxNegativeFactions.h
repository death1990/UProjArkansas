#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnMaxNegativeFactions.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnMaxNegativeFactions : public UEventListener {
    GENERATED_BODY()
public:
    UOnMaxNegativeFactions();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMaxNegativeFactions();
    
};

