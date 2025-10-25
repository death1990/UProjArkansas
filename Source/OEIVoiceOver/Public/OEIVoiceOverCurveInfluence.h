#pragma once
#include "CoreMinimal.h"
#include "OEIVoiceOverCurveInfluence.generated.h"

USTRUCT(BlueprintType)
struct FOEIVoiceOverCurveInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Influence;
    
    OEIVOICEOVER_API FOEIVoiceOverCurveInfluence();
};

