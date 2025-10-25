#pragma once
#include "CoreMinimal.h"
#include "OnCharacterRotationChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterRotationChanged, float, NewYaw);

