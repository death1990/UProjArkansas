#pragma once
#include "CoreMinimal.h"
#include "OnCurrencySpentDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrencySpent, UInventoryComponent*, InventoryComponent, int32, Currency);

