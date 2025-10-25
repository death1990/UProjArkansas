#pragma once
#include "CoreMinimal.h"
#include "EProjectileMode.h"
#include "OnSpawnPooledProjectileDelegate.generated.h"

class UWeapon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpawnPooledProjectile, UWeapon*, ParentWeapon, EProjectileMode, Mode);

