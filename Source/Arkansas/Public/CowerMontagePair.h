#pragma once
#include "CoreMinimal.h"
#include "CowerMontagePair.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCowerMontagePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CowerMontageLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CowerMontageEnd;
    
    ARKANSAS_API FCowerMontagePair();
};

