#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "OnKillingBlowDelegate.generated.h"

class UHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKillingBlow, UHealthComponent*, HealthComponent, FCauseDamageInfo, CDI);

