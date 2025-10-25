#pragma once
#include "CoreMinimal.h"
#include "IntCallbackArray.h"
#include "OEIRuntimeIntSetting.generated.h"

USTRUCT(BlueprintType)
struct FOEIRuntimeIntSetting : public FIntCallbackArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    OEISETTINGS_API FOEIRuntimeIntSetting();
};

