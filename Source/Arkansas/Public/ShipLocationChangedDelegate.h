#pragma once
#include "CoreMinimal.h"
#include "ShipLocationChangedDelegate.generated.h"

class UShipDestinationData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShipLocationChanged, const UShipDestinationData*, NewShipLocation);

