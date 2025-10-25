#pragma once
#include "CoreMinimal.h"
#include "WodemBorderProperties.generated.h"

USTRUCT(BlueprintType)
struct FWodemBorderProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBorderDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromCurve;
    
    OEIWODEMRUNTIME_API FWodemBorderProperties();
};

