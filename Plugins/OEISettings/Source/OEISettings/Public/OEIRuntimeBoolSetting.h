#pragma once
#include "CoreMinimal.h"
#include "BoolCallbackArray.h"
#include "OEIRuntimeBoolSetting.generated.h"

USTRUCT(BlueprintType)
struct FOEIRuntimeBoolSetting : public FBoolCallbackArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValue;
    
public:
    OEISETTINGS_API FOEIRuntimeBoolSetting();
};

