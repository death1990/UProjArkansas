#pragma once
#include "CoreMinimal.h"
#include "WeaponStartUnholsterDelegate.generated.h"

class UEquipmentComponent;
class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponStartUnholster, UEquipmentComponent*, EquipmentComponent, UWeapon*, Weapon);

