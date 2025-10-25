#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MapShipDestinations.generated.h"

class UShipDestinationData;

USTRUCT(BlueprintType)
struct FMapShipDestinations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UShipDestinationData*> Destinations;
    
    ARKANSAS_API FMapShipDestinations();
};

