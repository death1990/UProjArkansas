#pragma once
#include "CoreMinimal.h"
#include "OwSpeakerInfo.generated.h"

USTRUCT(BlueprintType)
struct FOwSpeakerInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartNode;
    
public:
    ARKANSAS_API FOwSpeakerInfo();
};

