#pragma once
#include "CoreMinimal.h"
#include "TagToAudio.h"
#include "TagToAudioList.generated.h"

USTRUCT(BlueprintType)
struct FTagToAudioList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagToAudio> AudioForItems;
    
    ARKANSAS_API FTagToAudioList();
};

