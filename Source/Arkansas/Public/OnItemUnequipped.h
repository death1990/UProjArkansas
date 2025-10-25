#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnItemUnequipped.generated.h"

class UItem;

UCLASS(Blueprintable, EditInlineNew)
class UOnItemUnequipped : public UEventListener {
    GENERATED_BODY()
public:
    UOnItemUnequipped();

protected:
    UFUNCTION(BlueprintCallable)
    void OnItemUnequipped(UItem* Item) const;
    
};

