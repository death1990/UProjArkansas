#pragma once
#include "CoreMinimal.h"
#include "AudioEventWithCooldown.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct OEIMUSIC_API FAudioEventWithCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PostEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    FAudioEventWithCooldown();
};

