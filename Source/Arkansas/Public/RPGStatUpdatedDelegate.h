#pragma once
#include "CoreMinimal.h"
#include "RPGStatUpdatedDelegate.generated.h"

class URpgStat;
class URpgStatComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRPGStatUpdated, URpgStatComponent*, StatComponent, const URpgStat*, Stat);

