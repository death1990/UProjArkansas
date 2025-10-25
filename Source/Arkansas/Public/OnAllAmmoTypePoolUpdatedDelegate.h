#pragma once
#include "CoreMinimal.h"
#include "OnAllAmmoTypePoolUpdatedDelegate.generated.h"

class UAmmo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAllAmmoTypePoolUpdated, UAmmo*, NewAmmo, int32, Count);

