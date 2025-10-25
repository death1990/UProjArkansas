#pragma once
#include "CoreMinimal.h"
#include "WeatherMaterialScalarParameter.generated.h"

USTRUCT(BlueprintType)
struct FWeatherMaterialScalarParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Value;
    
    OEIWEATHERSYSTEMRUNTIME_API FWeatherMaterialScalarParameter();
};

