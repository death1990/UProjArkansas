#pragma once
#include "CoreMinimal.h"
#include "RTPCWithValue.h"
#include "SwitchValue.h"
#include "MusicWwiseData.generated.h"

class UAkAudioEvent;
class UAkStateValue;

USTRUCT(BlueprintType)
struct FMusicWwiseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRTPCWithValue> RTPCsWithValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkStateValue*> StateValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwitchValue> SwitchValues;
    
    ARKANSAS_API FMusicWwiseData();
};

