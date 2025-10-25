#pragma once
#include "CoreMinimal.h"
#include "EndEquipDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndEquip, UWeapon*, Weapon);

