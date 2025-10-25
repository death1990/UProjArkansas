#pragma once
#include "CoreMinimal.h"
#include "AudioLogStoredInfo.generated.h"

class UAkExternalMediaAsset;

USTRUCT(BlueprintType)
struct FAudioLogStoredInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkExternalMediaAsset> AudioFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    ARKANSAS_API FAudioLogStoredInfo();
};

