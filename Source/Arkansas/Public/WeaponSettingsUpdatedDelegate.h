#pragma once
#include "CoreMinimal.h"
#include "WeaponSettingsUpdatedDelegate.generated.h"

class UAISettings_Weapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponSettingsUpdated, UAISettings_Weapon*, WeaponSettings);

