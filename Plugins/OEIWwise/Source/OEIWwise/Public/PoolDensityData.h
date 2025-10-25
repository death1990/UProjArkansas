#pragma once
#include "CoreMinimal.h"
#include "OEIWwiseEmitter.h"
#include "PoolDensityData.generated.h"

class UOEIWwiseObjectPoolWrapper;

USTRUCT(BlueprintType)
struct FPoolDensityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOEIWwiseObjectPoolWrapper* WwiseObjectPoolDensityWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOEIWwiseEmitter DensityEmitter;
    
    OEIWWISE_API FPoolDensityData();
};

