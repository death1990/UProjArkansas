#pragma once
#include "CoreMinimal.h"
#include "ItemStackSplit.h"
#include "OnVendorTransactionComplete_BlueprintDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnVendorTransactionComplete_Blueprint, int32, BuyingBalance, int32, SellingBalance, int32, RepairingBalance, FItemStackSplit, ItemStackSplit);

