#pragma once
#include "CoreMinimal.h"
#include "EndUnequipDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndUnequip, UWeapon*, Weapon);

