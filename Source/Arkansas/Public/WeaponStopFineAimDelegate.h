#pragma once
#include "CoreMinimal.h"
#include "WeaponStopFineAimDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponStopFineAim, UWeapon*, Weapon);

