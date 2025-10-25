#pragma once
#include "CoreMinimal.h"
#include "RadioAudioEventSet.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FRadioAudioEventSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UAkAudioEvent*> Events;
    
    ARKANSAS_API FRadioAudioEventSet();
};

