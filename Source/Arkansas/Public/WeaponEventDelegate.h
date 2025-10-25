#pragma once
#include "CoreMinimal.h"
#include "WeaponEventDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponEvent, UWeapon*, Weapon);

