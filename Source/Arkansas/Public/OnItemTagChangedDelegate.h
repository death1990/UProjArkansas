#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnItemTagChangedDelegate.generated.h"

class UItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemTagChanged, TSubclassOf<UItem>, Item, uint8, Tags);

