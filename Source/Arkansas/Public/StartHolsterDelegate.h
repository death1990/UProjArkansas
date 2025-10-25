#pragma once
#include "CoreMinimal.h"
#include "StartHolsterDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartHolster, UWeapon*, Weapon);

