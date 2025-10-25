#pragma once
#include "CoreMinimal.h"
#include "WeaponAttackDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponAttack, UWeapon*, Weapon);

