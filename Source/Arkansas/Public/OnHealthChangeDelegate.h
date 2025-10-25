#pragma once
#include "CoreMinimal.h"
#include "OnHealthChangeDelegate.generated.h"

class AActor;
class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHealthChange, UHealthComponent*, HealthComponent, float, PrevNormalizedHealth, float, CurrNormalizedHealth, AActor*, Instigator);

