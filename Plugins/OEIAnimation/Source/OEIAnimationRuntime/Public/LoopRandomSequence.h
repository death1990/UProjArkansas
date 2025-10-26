#pragma once
#include "CoreMinimal.h"
#include <GameplayTagContainer.h>
#include "RandomDataListEntry.h"
#include "LoopRandomSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FLoopRandomSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomDataListEntry> LoopSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StartSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StopSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreFilters;
    
    OEIANIMATIONRUNTIME_API FLoopRandomSequence();
};

