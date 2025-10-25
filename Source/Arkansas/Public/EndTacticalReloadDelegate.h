#pragma once
#include "CoreMinimal.h"
#include "EndTacticalReloadDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndTacticalReload, UWeapon*, Weapon);

