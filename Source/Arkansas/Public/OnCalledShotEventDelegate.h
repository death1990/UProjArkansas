#pragma once
#include "CoreMinimal.h"
#include "OnCalledShotEventDelegate.generated.h"

class UCalledShotData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCalledShotEvent, const UCalledShotData*, CalledShotData);

