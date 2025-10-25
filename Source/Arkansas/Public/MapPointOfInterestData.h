#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PointOfInterestLocation.h"
#include "MapPointOfInterestData.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UMapPointOfInterestData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPointOfInterestLocation> PointsOfInterest;
    
public:
    UMapPointOfInterestData();

};

