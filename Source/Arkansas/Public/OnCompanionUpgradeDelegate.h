#pragma once
#include "CoreMinimal.h"
#include "OnCompanionUpgradeDelegate.generated.h"

class UItemMod;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompanionUpgrade, UItemMod*, ItemMod);

