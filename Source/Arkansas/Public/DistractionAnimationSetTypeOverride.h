#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "DistractionAnimationSet.h"
#include "DistractionAnimationSetTypeOverride.generated.h"

USTRUCT(BlueprintType)
struct FDistractionAnimationSetTypeOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DistractionTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistractionAnimationSet AnimationSet;
    
    ARKANSAS_API FDistractionAnimationSetTypeOverride();
};

