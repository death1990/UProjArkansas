#pragma once
#include "CoreMinimal.h"
#include "TimeVaryingExposureSettings.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FTimeVaryingExposureSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_ExposureCurve;
    
public:
    ARKANSAS_API FTimeVaryingExposureSettings();
};

