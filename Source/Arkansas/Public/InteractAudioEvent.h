#pragma once
#include "CoreMinimal.h"
#include "InteractAudioEvent.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FInteractAudioEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseSound;
    
    ARKANSAS_API FInteractAudioEvent();
};

