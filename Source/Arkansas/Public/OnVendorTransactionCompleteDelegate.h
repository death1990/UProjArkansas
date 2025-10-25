#pragma once
#include "CoreMinimal.h"
#include "ItemStackSplit.h"
#include "OnVendorTransactionCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnVendorTransactionComplete, int32, BuyingBalance, int32, SellingBalance, int32, RepairingBalance, FItemStackSplit&, ItemStackSplit);

