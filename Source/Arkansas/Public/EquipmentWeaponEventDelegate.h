#pragma once
#include "CoreMinimal.h"
#include "EquipmentWeaponEventDelegate.generated.h"

class UEquipmentComponent;
class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEquipmentWeaponEvent, UEquipmentComponent*, EquipmentComponent, UWeapon*, Weapon);

