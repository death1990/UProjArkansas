#pragma once
#include "CoreMinimal.h"
#include "ItemStack.h"
#include "ItemStackDelegateDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemStackDelegate, UInventoryComponent*, InventoryComponent, const FItemStack&, Item);

