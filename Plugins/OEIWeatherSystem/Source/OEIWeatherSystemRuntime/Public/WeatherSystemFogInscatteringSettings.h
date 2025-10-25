#pragma once
#include "CoreMinimal.h"
#include "ECurveKey.h"
#include "WeatherSystemFogInscatteringSettings.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FWeatherSystemFogInscatteringSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* m_TintCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECurveKey> m_KeyType;
    
public:
    OEIWEATHERSYSTEMRUNTIME_API FWeatherSystemFogInscatteringSettings();
};

