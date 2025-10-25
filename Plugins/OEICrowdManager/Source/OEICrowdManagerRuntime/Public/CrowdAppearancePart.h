#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "CrowdAppearancePartData.h"
#include "CrowdAppearancePart.generated.h"

USTRUCT(BlueprintType)
struct FCrowdAppearancePart : public FCrowdAppearancePartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrowdAppearancePartData> SubParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint NumberOfSubpartsToInclude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubWeightSums;
    
    OEICROWDMANAGERRUNTIME_API FCrowdAppearancePart();
};

