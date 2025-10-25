#pragma once
#include "CoreMinimal.h"
#include "ECurveKey.h"
#include "WeatherSystemBloomSettings.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FWeatherSystemBloomSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_BloomIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECurveKey> m_KeyType;
    
public:
    OEIWEATHERSYSTEMRUNTIME_API FWeatherSystemBloomSettings();
};

