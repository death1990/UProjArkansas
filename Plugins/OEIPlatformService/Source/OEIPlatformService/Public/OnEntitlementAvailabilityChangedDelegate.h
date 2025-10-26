#pragma once
#include "CoreMinimal.h"
#include <GameplayTagContainer.h>
#include "OnEntitlementAvailabilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEntitlementAvailabilityChanged, const FGameplayTag&, Entitlement, bool, bAvailable);

