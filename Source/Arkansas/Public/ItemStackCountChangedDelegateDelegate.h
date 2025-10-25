#pragma once
#include "CoreMinimal.h"
#include "ItemStack.h"
#include "ItemStackCountChangedDelegateDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemStackCountChangedDelegate, UInventoryComponent*, InventoryComponent, const FItemStack&, Item, int32, OldCount);

