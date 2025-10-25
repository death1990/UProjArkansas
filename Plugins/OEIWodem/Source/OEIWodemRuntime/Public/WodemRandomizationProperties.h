#pragma once
#include "CoreMinimal.h"
#include "WodemRandomizationProperties.generated.h"

USTRUCT(BlueprintType)
struct FWodemRandomizationProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointOffset;
    
    OEIWODEMRUNTIME_API FWodemRandomizationProperties();
};

