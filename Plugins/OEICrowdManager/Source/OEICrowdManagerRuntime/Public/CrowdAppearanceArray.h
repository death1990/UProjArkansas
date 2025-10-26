#pragma once
#include "CoreMinimal.h"
#include <GameplayTagContainer.h>
#include "CrowdAppearancePart.h"
#include "CrowdAppearanceArray.generated.h"

USTRUCT(BlueprintType)
struct FCrowdAppearanceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AppearanceRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrowdAppearancePart> PartArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PartWeightSums;
    
    OEICROWDMANAGERRUNTIME_API FCrowdAppearanceArray();
};

