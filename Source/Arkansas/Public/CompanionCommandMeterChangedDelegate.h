#pragma once
#include "CoreMinimal.h"
#include "CompanionCommandMeterChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCompanionCommandMeterChanged, const float, Meter, const float, Delta);

