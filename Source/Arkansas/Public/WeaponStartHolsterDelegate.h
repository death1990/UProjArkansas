#pragma once
#include "CoreMinimal.h"
#include "WeaponStartHolsterDelegate.generated.h"

class UEquipmentComponent;
class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponStartHolster, UEquipmentComponent*, EquipmentComponent, UWeapon*, Weapon);

