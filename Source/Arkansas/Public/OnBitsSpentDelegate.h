#pragma once
#include "CoreMinimal.h"
#include "OnBitsSpentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBitsSpent, int32, NumBits);

