#pragma once
#include "CoreMinimal.h"
#include "RadioSongData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FRadioSongData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    ARKANSAS_API FRadioSongData();
};

