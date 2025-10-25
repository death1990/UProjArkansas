#pragma once
#include "CoreMinimal.h"
#include "WeaponStartEquipDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponStartEquip, UWeapon*, Weapon);

