#pragma once
#include "CoreMinimal.h"
#include "EWeaponPreference.h"
#include "OnWeaponPreferenceChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeaponPreferenceChange, EWeaponPreference, NewWeaponPreference, EWeaponPreference, OldWeaponPreference);

