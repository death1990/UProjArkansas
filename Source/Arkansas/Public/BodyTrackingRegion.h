#pragma once
#include "CoreMinimal.h"
#include "TrackingRegion.h"
#include "BodyTrackingRegion.generated.h"

class ULocomotionLogicComponent;

USTRUCT(BlueprintType)
struct FBodyTrackingRegion : public FTrackingRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULocomotionLogicComponent* LocomotionLogic;
    
    ARKANSAS_API FBodyTrackingRegion();
};

