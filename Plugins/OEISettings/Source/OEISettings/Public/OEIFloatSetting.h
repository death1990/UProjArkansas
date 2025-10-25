#pragma once
#include "CoreMinimal.h"
#include "EOEINumericalType.h"
#include "OEIUserSetting.h"
#include "OEIFloatSetting.generated.h"

UCLASS(Blueprintable)
class OEISETTINGS_API UOEIFloatSetting : public UOEIUserSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOEINumericalType NumericalType;
    
    UOEIFloatSetting();

};

