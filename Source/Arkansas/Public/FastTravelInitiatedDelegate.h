#pragma once
#include "CoreMinimal.h"
#include "FastTravelInitiatedDelegate.generated.h"

class UPointOfInterestData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFastTravelInitiated, const UPointOfInterestData*, TravelDestinationData, float, TimePassed);

