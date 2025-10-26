#pragma once
#include "CoreMinimal.h"
#include <GameplayTagContainer.h>
#include "OEIWwiseEmitterCreationParams.generated.h"

class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;

USTRUCT(BlueprintType)
struct OEIWWISE_API FOEIWwiseEmitterCreationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RTPCValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SWITCH;
    
    FOEIWwiseEmitterCreationParams();
};

