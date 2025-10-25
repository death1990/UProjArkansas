#pragma once
#include "CoreMinimal.h"
#include "TrackingRegion.h"
#include "HeadTrackingRegion.generated.h"

USTRUCT(BlueprintType)
struct FHeadTrackingRegion : public FTrackingRegion {
    GENERATED_BODY()
public:
    ARKANSAS_API FHeadTrackingRegion();
};

