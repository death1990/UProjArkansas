#pragma once
#include "CoreMinimal.h"
#include "RadToxicityRangeData.h"
#include "OnRadToxicityRangeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRadToxicityRangeChanged, TArray<FRadToxicityRangeData>, ToxicityRangeData);

