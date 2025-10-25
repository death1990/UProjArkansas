#pragma once
#include "CoreMinimal.h"
#include "ECurveKey.h"
#include "WeatherSystemTwilightSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FWeatherSystemTwilightSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_TwilightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECurveKey> m_KeyType;
    
public:
    OEIWEATHERSYSTEMRUNTIME_API FWeatherSystemTwilightSettings();
};

