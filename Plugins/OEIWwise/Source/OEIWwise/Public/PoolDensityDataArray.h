#pragma once
#include "CoreMinimal.h"
#include "PoolDensityData.h"
#include "PoolDensityDataArray.generated.h"

USTRUCT(BlueprintType)
struct FPoolDensityDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPoolDensityData> DensityDataArray;
    
    OEIWWISE_API FPoolDensityDataArray();
};

