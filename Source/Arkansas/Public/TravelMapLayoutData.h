#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PointOfInterestLocation.h"
#include "ServicePointOfInterestLocation.h"
#include "TravelMapPosition.h"
#include "TravelShipData.h"
#include "TravelMapLayoutData.generated.h"

class UWorld;

UCLASS(Blueprintable)
class ARKANSAS_API UTravelMapLayoutData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> AssociatedPersistentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadAllSublevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTravelMapPosition> TravelMapPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTravelShipData ShipTravelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPointOfInterestLocation> PointsOfInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FServicePointOfInterestLocation> ServicePOIS;
    
    UTravelMapLayoutData();

};

