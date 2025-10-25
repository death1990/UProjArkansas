#pragma once
#include "CoreMinimal.h"
#include "OnMaxHealthChangeDelegate.generated.h"

class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMaxHealthChange, UHealthComponent*, HealthComponent, float, PrevNormalizedHealth, float, CurrNormalizedHealth);

