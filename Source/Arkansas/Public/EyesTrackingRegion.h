#pragma once
#include "CoreMinimal.h"
#include "TrackingRegion.h"
#include "EyesTrackingRegion.generated.h"

USTRUCT(BlueprintType)
struct FEyesTrackingRegion : public FTrackingRegion {
    GENERATED_BODY()
public:
    ARKANSAS_API FEyesTrackingRegion();
};

