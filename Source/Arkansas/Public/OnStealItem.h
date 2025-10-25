#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnStealItem.generated.h"

class UItem;

UCLASS(Blueprintable, EditInlineNew)
class UOnStealItem : public UEventListener {
    GENERATED_BODY()
public:
    UOnStealItem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStealItem(UItem* Item);
    
};

