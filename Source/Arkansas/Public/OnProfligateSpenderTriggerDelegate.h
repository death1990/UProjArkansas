#pragma once
#include "CoreMinimal.h"
#include "OnProfligateSpenderTriggerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProfligateSpenderTrigger, int32, BitsReceived);

