#pragma once
#include "CoreMinimal.h"
#include "AmbientAudioEvent.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct OEIWWISE_API FAmbientAudioEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    FAmbientAudioEvent();
};

