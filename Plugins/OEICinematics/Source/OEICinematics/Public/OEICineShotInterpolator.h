#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOEIShotHandoffMode.h"
#include "OEICinematicRotationInterpolation.h"
#include "OEICinematicScalarInterpolation.h"
#include "OEICineShotInterpolator.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class OEICINEMATICS_API UOEICineShotInterpolator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICinematicRotationInterpolation RotationInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICinematicScalarInterpolation FStopInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEICinematicScalarInterpolation FocalDistanceInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawSnapThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoubleSpeakerFramingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOEIShotHandoffMode DefaultValueInitialization;
    
    UOEICineShotInterpolator();

};

