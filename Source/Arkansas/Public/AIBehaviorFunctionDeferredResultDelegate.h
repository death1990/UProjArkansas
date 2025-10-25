#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorFunctionDeferredResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAIBehaviorFunctionDeferredResult, bool, Success);

