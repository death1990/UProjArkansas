#pragma once
#include "CoreMinimal.h"
#include "TrackingSetting.generated.h"

USTRUCT(BlueprintType)
struct FTrackingSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ComfortAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDistanceThreshold;
    
    ARKANSAS_API FTrackingSetting();
};

