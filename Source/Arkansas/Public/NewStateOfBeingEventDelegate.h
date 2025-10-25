#pragma once
#include "CoreMinimal.h"
#include "EStateOfBeing.h"
#include "NewStateOfBeingEventDelegate.generated.h"

class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FNewStateOfBeingEvent, UHealthComponent*, HealthComponent, EStateOfBeing, NewStateOfBeing, EStateOfBeing, OldStateOfBeing);

