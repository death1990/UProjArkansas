#pragma once
#include "CoreMinimal.h"
#include "OnItemPartsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemPartsChanged, int32, WeaponParts, int32, ArmorParts);

