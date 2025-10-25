#pragma once
#include "CoreMinimal.h"
#include "EActivation.h"
#include "ActivationParams.generated.h"

USTRUCT(BlueprintType)
struct FActivationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivation Activation;
    
    ARKANSAS_API FActivationParams();
};

