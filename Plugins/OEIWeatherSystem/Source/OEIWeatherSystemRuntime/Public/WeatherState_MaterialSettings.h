#pragma once
#include "CoreMinimal.h"
#include "WeatherMaterialScalarParameter.h"
#include "WeatherMaterialVectorParameter.h"
#include "WeatherStateBase.h"
#include "WeatherState_MaterialSettings.generated.h"

UCLASS(Blueprintable)
class OEIWEATHERSYSTEMRUNTIME_API UWeatherState_MaterialSettings : public UWeatherStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherMaterialScalarParameter> m_MaterialScalarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherMaterialVectorParameter> m_MaterialVectorParams;
    
    UWeatherState_MaterialSettings();

};

