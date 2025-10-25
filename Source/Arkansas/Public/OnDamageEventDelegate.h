#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "OnDamageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageEvent, const FCauseDamageInfo&, CauseDamageInfo);

