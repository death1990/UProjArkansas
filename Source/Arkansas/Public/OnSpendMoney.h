#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnSpendMoney.generated.h"

class UInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnSpendMoney : public UEventListener {
    GENERATED_BODY()
public:
    UOnSpendMoney();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMoneySpent(UInventoryComponent* InventoryComponent, int32 Money);
    
};

