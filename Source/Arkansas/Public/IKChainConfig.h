#pragma once
#include "CoreMinimal.h"
#include "EFootID.h"
#include "IKChainConfig.generated.h"

USTRUCT(BlueprintType)
struct FIKChainConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFootID FootID;
    
    ARKANSAS_API FIKChainConfig();
};

