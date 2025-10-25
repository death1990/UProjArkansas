#pragma once
#include "CoreMinimal.h"
#include "ResponseNodeSubmittedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResponseNodeSubmitted, float, TimeSinceResponseNodesShown);

