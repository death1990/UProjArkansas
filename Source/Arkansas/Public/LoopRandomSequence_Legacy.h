#pragma once
#include "CoreMinimal.h"
#include "RandomPlayerSequenceEntryNamed.h"
#include "LoopRandomSequence_Legacy.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FLoopRandomSequence_Legacy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomPlayerSequenceEntryNamed> LoopSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StartSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StopSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreBarkWhileInBLEBranch;
    
    ARKANSAS_API FLoopRandomSequence_Legacy();
};

