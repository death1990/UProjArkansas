#pragma once
#include "CoreMinimal.h"
#include "OEIWwiseAcousticsDesignParams.generated.h"

USTRUCT(BlueprintType)
struct OEIWWISE_API FOEIWwiseAcousticsDesignParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReverbAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutdoornessAdjustment;
    
    FOEIWwiseAcousticsDesignParams();
};

