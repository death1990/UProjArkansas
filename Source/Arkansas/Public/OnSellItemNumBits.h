#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "ItemStackSplit.h"
#include "OnSellItemNumBits.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnSellItemNumBits : public UEventListener {
    GENERATED_BODY()
public:
    UOnSellItemNumBits();

protected:
    UFUNCTION(BlueprintCallable)
    void OnVectorTransaction(int32 BuyingBalance, int32 SellingBalance, int32 RepairingBalance, FItemStackSplit& ItemStackSplit);
    
};

