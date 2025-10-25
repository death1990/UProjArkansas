#pragma once
#include "CoreMinimal.h"
#include "DistractionAnimations.h"
#include "DistractionAnimationSet.generated.h"

USTRUCT(BlueprintType)
struct FDistractionAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistractionAnimations ReachableAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistractionAnimations UnreachableAnimations;
    
    ARKANSAS_API FDistractionAnimationSet();
};

