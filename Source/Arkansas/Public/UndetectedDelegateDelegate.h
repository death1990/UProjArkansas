#pragma once
#include "CoreMinimal.h"
#include "UndetectedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUndetectedDelegate, AActor*, Detectee);

