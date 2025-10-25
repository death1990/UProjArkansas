#pragma once
#include "CoreMinimal.h"
#include "OnStopFineAimDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStopFineAim, UWeapon*, Weapon);

