#pragma once
#include "CoreMinimal.h"
#include "RadioAudioEventArray.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FRadioAudioEventArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> Events;
    
    ARKANSAS_API FRadioAudioEventArray();
};

