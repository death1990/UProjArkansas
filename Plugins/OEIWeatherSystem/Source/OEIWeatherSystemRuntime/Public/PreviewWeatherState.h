#pragma once
#include "CoreMinimal.h"
#include "PreviewWeatherState.generated.h"

class UWeatherStateBase;

USTRUCT(BlueprintType)
struct FPreviewWeatherState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeatherStateBase* m_WeatherState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Strength;
    
    OEIWEATHERSYSTEMRUNTIME_API FPreviewWeatherState();
};

