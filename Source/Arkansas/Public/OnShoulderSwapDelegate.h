#pragma once
#include "CoreMinimal.h"
#include "OnShoulderSwapDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShoulderSwap, const bool, bUseAlternateShoulder);

