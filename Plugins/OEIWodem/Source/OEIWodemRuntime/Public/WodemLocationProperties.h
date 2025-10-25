#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "WodemLocationProperties.generated.h"

USTRUCT(BlueprintType)
struct FWodemLocationProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval PlantingDepth;
    
    OEIWODEMRUNTIME_API FWodemLocationProperties();
};

