#pragma once
#include "CoreMinimal.h"
#include "WeaponEndEquipDelegate.generated.h"

class UEquipmentComponent;
class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponEndEquip, UEquipmentComponent*, EquipmentComponent, UWeapon*, Weapon);

