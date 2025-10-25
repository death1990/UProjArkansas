#pragma once
#include "CoreMinimal.h"
#include "FxEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FFxEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    OEIANIMPROXYRUNTIME_API FFxEventInfo();
};

