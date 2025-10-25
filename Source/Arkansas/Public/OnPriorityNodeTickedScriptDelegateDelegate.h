#pragma once
#include "CoreMinimal.h"
#include "OnPriorityNodeTickedScriptDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPriorityNodeTickedScriptDelegate, float, TickDeltaSeconds);

