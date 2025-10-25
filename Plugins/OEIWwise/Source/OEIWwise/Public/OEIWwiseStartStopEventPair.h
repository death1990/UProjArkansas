#pragma once
#include "CoreMinimal.h"
#include "OEIWwiseStartStopEventPair.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FOEIWwiseStartStopEventPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopEvent;
    
    OEIWWISE_API FOEIWwiseStartStopEventPair();
};

