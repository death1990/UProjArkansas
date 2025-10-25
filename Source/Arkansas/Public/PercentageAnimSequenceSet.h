#pragma once
#include "CoreMinimal.h"
#include "PercentageRange.h"
#include "PercentageAnimSequenceSet.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPercentageAnimSequenceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPercentageRange Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequence_Weapon;
    
    ARKANSAS_API FPercentageAnimSequenceSet();
};

