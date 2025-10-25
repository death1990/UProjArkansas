#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "WeatherIntensityVolume.generated.h"

class UWeatherStateBase;

UCLASS(Blueprintable)
class AWeatherIntensityVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeatherStateBase* WeatherStateBase;
    
    AWeatherIntensityVolume(const FObjectInitializer& ObjectInitializer);

};

