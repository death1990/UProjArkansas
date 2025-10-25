#pragma once
#include "CoreMinimal.h"
#include "TravelInitiatedDelegate.generated.h"

class UPointOfInterestData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTravelInitiated, const UPointOfInterestData*, TravelDestinationData);

