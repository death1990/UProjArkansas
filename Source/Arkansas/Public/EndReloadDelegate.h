#pragma once
#include "CoreMinimal.h"
#include "EndReloadDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndReload, UWeapon*, Weapon);

