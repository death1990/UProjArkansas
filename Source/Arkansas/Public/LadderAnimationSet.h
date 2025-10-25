#pragma once
#include "CoreMinimal.h"
#include "LadderAnimationSet.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FLadderAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndAnimation;
    
    ARKANSAS_API FLadderAnimationSet();
};

