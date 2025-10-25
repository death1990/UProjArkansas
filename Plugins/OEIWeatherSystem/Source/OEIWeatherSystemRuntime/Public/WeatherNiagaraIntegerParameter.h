#pragma once
#include "CoreMinimal.h"
#include "WeatherNiagaraIntegerParameter.generated.h"

USTRUCT(BlueprintType)
struct FWeatherNiagaraIntegerParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Value;
    
    OEIWEATHERSYSTEMRUNTIME_API FWeatherNiagaraIntegerParameter();
};

