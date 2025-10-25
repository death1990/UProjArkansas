#pragma once
#include "CoreMinimal.h"
#include "TacticalTimeDilationEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTacticalTimeDilationEnded, float, Duration);

