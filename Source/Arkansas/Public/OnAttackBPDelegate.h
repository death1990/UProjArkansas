#pragma once
#include "CoreMinimal.h"
#include "OnAttackBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttackBP, float, DurationScalar, bool, bIsQuickMelee);

