#pragma once
#include "CoreMinimal.h"
#include "OnTargetedEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetedEvent, AActor*, Actor);

