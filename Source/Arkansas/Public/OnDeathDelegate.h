#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "OnDeathDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, const FCauseDamageInfo&, CauseDamageInfo);

