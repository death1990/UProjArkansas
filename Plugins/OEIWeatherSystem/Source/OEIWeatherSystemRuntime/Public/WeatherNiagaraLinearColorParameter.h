#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "WeatherNiagaraLinearColorParameter.generated.h"

USTRUCT(BlueprintType)
struct FWeatherNiagaraLinearColorParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_Value;
    
    OEIWEATHERSYSTEMRUNTIME_API FWeatherNiagaraLinearColorParameter();
};

