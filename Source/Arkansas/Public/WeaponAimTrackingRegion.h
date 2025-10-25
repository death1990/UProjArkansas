#pragma once
#include "CoreMinimal.h"
#include "TrackingRegion.h"
#include "WeaponAimTrackingRegion.generated.h"

USTRUCT(BlueprintType)
struct FWeaponAimTrackingRegion : public FTrackingRegion {
    GENERATED_BODY()
public:
    ARKANSAS_API FWeaponAimTrackingRegion();
};

