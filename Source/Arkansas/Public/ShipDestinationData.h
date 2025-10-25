#pragma once
#include "CoreMinimal.h"
#include "PointOfInterestData.h"
#include "ShipDestinationData.generated.h"

class UMapInformation;

UCLASS(Blueprintable)
class ARKANSAS_API UShipDestinationData : public UPointOfInterestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapInformation* RegionMapInformation;
    
    UShipDestinationData();

};

