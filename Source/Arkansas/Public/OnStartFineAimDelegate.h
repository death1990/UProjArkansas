#pragma once
#include "CoreMinimal.h"
#include "OnStartFineAimDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartFineAim, UWeapon*, Weapon);

