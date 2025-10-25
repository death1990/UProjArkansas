#pragma once
#include "CoreMinimal.h"
#include "WeaponEndUnequipDelegate.generated.h"

class UEquipmentComponent;
class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponEndUnequip, UEquipmentComponent*, EquipmentComponent, UWeapon*, Weapon);

