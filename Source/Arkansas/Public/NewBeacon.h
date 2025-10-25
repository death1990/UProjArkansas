#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BeaconProperties.h"
#include "MapFloorTrackedActor.h"
#include "NewBeacon.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ANewBeacon : public AActor, public IMapFloorTrackedActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeaconProperties BeaconProperties;
    
public:
    ANewBeacon(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

