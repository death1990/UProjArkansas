#pragma once
#include "CoreMinimal.h"
#include "CrimeResponseData.generated.h"

class UAnimationProxyData;

USTRUCT(BlueprintType)
struct FCrimeResponseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationProxyData> AnimProxyData;
    
    ARKANSAS_API FCrimeResponseData();
};

