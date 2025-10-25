#pragma once
#include "CoreMinimal.h"
#include "ESellItemType.h"
#include "EventListener.h"
#include "ItemStackSplit.h"
#include "OnSellItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnSellItem : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESellItemType ItemType;
    
public:
    UOnSellItem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnVectorTransaction(int32 BuyingBalance, int32 SellingBalance, int32 RepairingBalance, FItemStackSplit& ItemStackSplit);
    
};

