#pragma once
#include "CoreMinimal.h"
#include "WeaponEndEmptyReloadDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponEndEmptyReload, UWeapon*, Weapon);

