#pragma once
#include "CoreMinimal.h"
#include "OwCrowdAppearanceLayer.h"
#include "OwCrowdAppearanceLayers.generated.h"

USTRUCT(BlueprintType)
struct FOwCrowdAppearanceLayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOwCrowdAppearanceLayer> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LayerSumWeight;
    
    ARKANSAS_API FOwCrowdAppearanceLayers();
};

