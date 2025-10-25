#pragma once
#include "CoreMinimal.h"
#include "ColorGradingSetting.h"
#include "ECurveKey.h"
#include "WeatherSystemColorGradingSettings.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FWeatherSystemColorGradingSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorGradingSetting m_ColorGradingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorGradingSetting m_ShadowsColorGradingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorGradingSetting m_MidtonesColorGradingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorGradingSetting m_HighlightsColorGradingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_WhiteBalanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECurveKey> m_KeyType;
    
public:
    OEIWEATHERSYSTEMRUNTIME_API FWeatherSystemColorGradingSettings();
};

