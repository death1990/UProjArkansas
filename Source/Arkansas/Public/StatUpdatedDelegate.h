#pragma once
#include "CoreMinimal.h"
#include "StatUpdatedDelegate.generated.h"

class URpgStat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStatUpdated, const URpgStat*, Stat);

