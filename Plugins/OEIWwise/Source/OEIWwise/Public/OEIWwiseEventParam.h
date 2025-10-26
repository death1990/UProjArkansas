#pragma once
#include "CoreMinimal.h"
#include <AkExternalSourceInfo.h>
#include "OEIWwiseEventParam.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FOEIWwiseEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WwiseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAkExternalSourceInfo> ExternalSources;
    
    OEIWWISE_API FOEIWwiseEventParam();
};

