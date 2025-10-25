#pragma once
#include "CoreMinimal.h"
#include "AkAudioEventArray.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAkAudioEventArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> AudioEvents;
    
    ARKANSAS_API FAkAudioEventArray();
};

