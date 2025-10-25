#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "OnBodyPartStateChangedDelegate.generated.h"

class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnBodyPartStateChanged, UHealthComponent*, HealthComponent, FCauseDamageInfo, CDI, bool, bHealthy, bool, bFromRestore);

