#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LastAmmoInInventoryDelegate.generated.h"

class UAmmo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLastAmmoInInventory, TSubclassOf<UAmmo>, AmmoType);

