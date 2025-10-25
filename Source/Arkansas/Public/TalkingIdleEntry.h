#pragma once
#include "CoreMinimal.h"
#include "LoopRandomSequence_Legacy.h"
#include "RandomPlayerSequenceEntryNamed.h"
#include "TalkingIdleEntry.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FTalkingIdleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StartSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLoopRandomSequence_Legacy> TalkingSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomPlayerSequenceEntryNamed> Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomPlayerSequenceEntryNamed> DialogIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoopRandomSequence_Legacy> IdleStates;
    
    ARKANSAS_API FTalkingIdleEntry();
};

