#pragma once
#include "CoreMinimal.h"
#include "WodemSnappingProperties.generated.h"

USTRUCT(BlueprintType)
struct FWodemSnappingProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToSurfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnappingBlend;
    
    OEIWODEMRUNTIME_API FWodemSnappingProperties();
};

