#pragma once
#include "CoreMinimal.h"
#include "TryReloadDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTryReload, UWeapon*, Weapon);

