#pragma once
#include "CoreMinimal.h"
#include "FloatCallbackArray.h"
#include "OEIRuntimeFloatSetting.generated.h"

USTRUCT(BlueprintType)
struct FOEIRuntimeFloatSetting : public FFloatCallbackArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    OEISETTINGS_API FOEIRuntimeFloatSetting();
};

