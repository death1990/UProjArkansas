#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnItemTinkered.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnItemTinkered : public UEventListener {
    GENERATED_BODY()
public:
    UOnItemTinkered();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemTinkered();
    
};

