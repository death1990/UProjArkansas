#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "WeatherStateBase.generated.h"

UCLASS(Abstract, Blueprintable)
class OEIWEATHERSYSTEMRUNTIME_API UWeatherStateBase : public UDataAsset {
    GENERATED_BODY()
public:
    UWeatherStateBase();

};

