#pragma once
#include "CoreMinimal.h"
#include "StartReloadDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartReload, UWeapon*, Weapon);

