#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MapShipDestinations.h"
#include "ShipTravelData.generated.h"

class UMapInformation;
class UWorld;

UCLASS(Blueprintable)
class ARKANSAS_API UShipTravelData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapInformation* ShipMapInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UWorld>, FMapShipDestinations> ShipDestinations;
    
public:
    UShipTravelData();

};

