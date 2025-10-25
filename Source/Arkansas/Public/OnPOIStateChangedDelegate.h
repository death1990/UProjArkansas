#pragma once
#include "CoreMinimal.h"
#include "EPointOfInterestState.h"
#include "OnPOIStateChangedDelegate.generated.h"

class UPointOfInterestData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPOIStateChanged, const UPointOfInterestData*, TravelDestinationData, EPointOfInterestState, NewState);

