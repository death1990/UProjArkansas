#pragma once
#include "CoreMinimal.h"
#include "AkAudioStateSwitchContainer.generated.h"

class UAkStateValue;
class UAkSwitchValue;

USTRUCT(BlueprintType)
struct FAkAudioStateSwitchContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* AudioSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AudioState;
    
    ARKANSAS_API FAkAudioStateSwitchContainer();
};

