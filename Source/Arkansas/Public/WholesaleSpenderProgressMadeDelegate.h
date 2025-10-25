#pragma once
#include "CoreMinimal.h"
#include "WholesaleSpenderProgressMadeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWholesaleSpenderProgressMade, const int32, TotalBitsTradedWithVendor);

