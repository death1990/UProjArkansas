#pragma once
#include "CoreMinimal.h"
#include "OEIWeightedGesture.h"
#include "OEIWeightedGestureCollection.generated.h"

USTRUCT(BlueprintType)
struct OEICINEMATICS_API FOEIWeightedGestureCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOEIWeightedGesture> WeightedGestures;
    
    FOEIWeightedGestureCollection();
};

