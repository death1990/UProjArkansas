#pragma once
#include "CoreMinimal.h"
#include "CompanionCalledShotMeterChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCompanionCalledShotMeterChanged, const int32, CompIndex, const float, PrevNorm, const float, NewNorm);

