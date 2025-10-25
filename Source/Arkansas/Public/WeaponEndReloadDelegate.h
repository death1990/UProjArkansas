#pragma once
#include "CoreMinimal.h"
#include "WeaponEndReloadDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponEndReload, UWeapon*, Weapon);

