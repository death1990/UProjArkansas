#pragma once
#include "CoreMinimal.h"
#include "WodemRaycastSurface.generated.h"

class AActor;
class UMaterial;

USTRUCT(BlueprintType)
struct FWodemRaycastSurface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Surface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* DistributionMaterial;
    
    OEIWODEMRUNTIME_API FWodemRaycastSurface();
};

