#pragma once
#include "CoreMinimal.h"
#include "WeatherStateBase.h"
#include "WeatherState_Aggregate.generated.h"

UCLASS(Blueprintable)
class OEIWEATHERSYSTEMRUNTIME_API UWeatherState_Aggregate : public UWeatherStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWeatherStateBase*> m_BaseWeatherStates;
    
    UWeatherState_Aggregate();

};

