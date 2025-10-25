#pragma once
#include "CoreMinimal.h"
#include "FastTravelPoint.generated.h"

class AIndianaPlayerStart;
class UPointOfInterestData;

USTRUCT(BlueprintType)
struct FFastTravelPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestData* OverridePOIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AIndianaPlayerStart> IndianaPlayerStart;
    
    ARKANSAS_API FFastTravelPoint();
};

