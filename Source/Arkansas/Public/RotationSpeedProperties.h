#pragma once
#include "CoreMinimal.h"
#include "RotationSpeedProperties.generated.h"

USTRUCT(BlueprintType)
struct FRotationSpeedProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonTrackingRotationSpeed;
    
    ARKANSAS_API FRotationSpeedProperties();
};

