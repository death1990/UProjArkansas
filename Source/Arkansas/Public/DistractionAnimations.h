#pragma once
#include "CoreMinimal.h"
#include "DistractionAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FDistractionAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndAnimation;
    
    ARKANSAS_API FDistractionAnimations();
};

