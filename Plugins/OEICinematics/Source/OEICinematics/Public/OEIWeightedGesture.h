#pragma once
#include "CoreMinimal.h"
#include "OEIWeightedGesture.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEIWeightedGesture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FOEIWeightedGesture();
};

