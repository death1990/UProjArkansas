#pragma once
#include "CoreMinimal.h"
#include "OEIVoiceOverCurveInfluence.h"
#include "OEIVoiceOverCurveRegion.generated.h"

USTRUCT(BlueprintType)
struct FOEIVoiceOverCurveRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControlCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOEIVoiceOverCurveInfluence> RegionCurves;
    
    OEIVOICEOVER_API FOEIVoiceOverCurveRegion();
};

