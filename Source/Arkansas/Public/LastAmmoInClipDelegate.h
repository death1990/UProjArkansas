#pragma once
#include "CoreMinimal.h"
#include "LastAmmoInClipDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLastAmmoInClip, UWeapon*, Weapon);

