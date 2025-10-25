#pragma once
#include "CoreMinimal.h"
#include "WeaponEndUnholsterDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponEndUnholster, UWeapon*, Weapon);

