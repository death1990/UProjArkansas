#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnRest.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnRest : public UEventListener {
    GENERATED_BODY()
public:
    UOnRest();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRest();
    
};

