#pragma once
#include "CoreMinimal.h"
#include "WholesaleSpenderPreviewProgressDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWholesaleSpenderPreviewProgress, const int32, TotalTransactionBitValue);

