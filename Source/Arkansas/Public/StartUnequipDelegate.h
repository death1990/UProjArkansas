#pragma once
#include "CoreMinimal.h"
#include "StartUnequipDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartUnequip, UWeapon*, Weapon);

