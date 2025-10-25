#pragma once
#include "CoreMinimal.h"
#include "WeaponStartFineAimDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponStartFineAim, UWeapon*, Weapon);

