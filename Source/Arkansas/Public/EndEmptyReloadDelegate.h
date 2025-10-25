#pragma once
#include "CoreMinimal.h"
#include "EndEmptyReloadDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndEmptyReload, UWeapon*, Weapon);

