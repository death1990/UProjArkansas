#pragma once
#include "CoreMinimal.h"
#include "ECurveKey.h"
#include "WeatherSystemExposureSettings.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FWeatherSystemExposureSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_ExposureCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECurveKey> m_KeyType;
    
public:
    OEIWEATHERSYSTEMRUNTIME_API FWeatherSystemExposureSettings();
};

