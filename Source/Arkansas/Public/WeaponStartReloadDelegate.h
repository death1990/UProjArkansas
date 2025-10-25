#pragma once
#include "CoreMinimal.h"
#include "WeaponStartReloadDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponStartReload, UWeapon*, Weapon);

