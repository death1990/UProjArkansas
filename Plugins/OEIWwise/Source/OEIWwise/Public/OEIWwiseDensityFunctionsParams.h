#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PoolDensityDataArray.h"
#include "OEIWwiseDensityFunctionsParams.generated.h"

UCLASS(Blueprintable)
class OEIWWISE_API UOEIWwiseDensityFunctionsParams : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FPoolDensityDataArray> PoolDensityWrapperData;
    
    UOEIWwiseDensityFunctionsParams();

};

