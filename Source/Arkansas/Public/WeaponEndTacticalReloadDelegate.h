#pragma once
#include "CoreMinimal.h"
#include "WeaponEndTacticalReloadDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponEndTacticalReload, UWeapon*, Weapon);

