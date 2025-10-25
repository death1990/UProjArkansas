#pragma once
#include "CoreMinimal.h"
#include "DynamicOverridePrimaryTargetDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(AActor*, FDynamicOverridePrimaryTargetDelegate);

