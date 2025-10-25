#pragma once
#include "CoreMinimal.h"
#include "OnStealItemDelegate.generated.h"

class UItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStealItem, UItem*, Item);

