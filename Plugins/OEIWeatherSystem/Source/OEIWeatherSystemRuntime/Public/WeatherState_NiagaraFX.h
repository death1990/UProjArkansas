#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeatherNiagaraFloatParameter.h"
#include "WeatherNiagaraIntegerParameter.h"
#include "WeatherNiagaraLinearColorParameter.h"
#include "WeatherStateBase.h"
#include "WeatherState_NiagaraFX.generated.h"

class ANiagaraLensEffectBase;

UCLASS(Blueprintable)
class UWeatherState_NiagaraFX : public UWeatherStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANiagaraLensEffectBase> m_LensEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherNiagaraFloatParameter> m_FloatParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherNiagaraIntegerParameter> m_IntegerParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherNiagaraLinearColorParameter> m_ColorParams;
    
    UWeatherState_NiagaraFX();

};

