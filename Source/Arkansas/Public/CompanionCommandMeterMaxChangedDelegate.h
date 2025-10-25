#pragma once
#include "CoreMinimal.h"
#include "CompanionCommandMeterMaxChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompanionCommandMeterMaxChanged, const float, MeterMax);

