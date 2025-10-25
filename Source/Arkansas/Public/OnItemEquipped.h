#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnItemEquipped.generated.h"

class UItem;

UCLASS(Blueprintable, EditInlineNew)
class UOnItemEquipped : public UEventListener {
    GENERATED_BODY()
public:
    UOnItemEquipped();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(UItem* Item) const;
    
};

