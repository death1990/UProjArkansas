#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnLie.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnLie : public UEventListener {
    GENERATED_BODY()
public:
    UOnLie();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLie();
    
};

