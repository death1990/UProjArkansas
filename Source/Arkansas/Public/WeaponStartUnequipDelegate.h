#pragma once
#include "CoreMinimal.h"
#include "WeaponStartUnequipDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponStartUnequip, UWeapon*, Weapon);

