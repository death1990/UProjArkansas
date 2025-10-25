#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "FPVAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FFPVAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    ARKANSAS_API FFPVAnimInstanceProxy();
};

