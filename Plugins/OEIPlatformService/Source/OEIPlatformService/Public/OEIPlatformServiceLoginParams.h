#pragma once
#include "CoreMinimal.h"
#include "EOEIPlatformServiceProvider.h"
#include "OEIPlatformServiceLoginParams.generated.h"

USTRUCT(BlueprintType)
struct OEIPLATFORMSERVICE_API FOEIPlatformServiceLoginParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOEIPlatformServiceProvider Provider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLoginOnly;
    
    FOEIPlatformServiceLoginParams();
};

