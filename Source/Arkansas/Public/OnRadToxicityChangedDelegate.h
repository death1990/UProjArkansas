#pragma once
#include "CoreMinimal.h"
#include "OnRadToxicityChangedDelegate.generated.h"

class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRadToxicityChanged, UHealthComponent*, HealthComponent, float, PrevNormalizedToxicity, float, CurrNormalizedToxicity);

