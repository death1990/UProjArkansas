#pragma once
#include "CoreMinimal.h"
#include "OnShieldHealthChangeDelegate.generated.h"

class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnShieldHealthChange, UHealthComponent*, HealthComponent, float, PrevNormShieldHealth, float, CurrNormShieldHealth);

