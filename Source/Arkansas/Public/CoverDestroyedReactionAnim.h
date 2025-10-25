#pragma once
#include "CoreMinimal.h"
#include "CoverDestroyedReactionAnim.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCoverDestroyedReactionAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Anim;
    
    ARKANSAS_API FCoverDestroyedReactionAnim();
};

