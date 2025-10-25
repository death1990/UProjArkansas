#pragma once
#include "CoreMinimal.h"
#include "CrimResponseDataLoaded.generated.h"

class UAnimationProxyData;

USTRUCT(BlueprintType)
struct FCrimResponseDataLoaded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationProxyData* ProxyData;
    
    ARKANSAS_API FCrimResponseDataLoaded();
};

