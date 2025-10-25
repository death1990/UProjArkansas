#pragma once
#include "CoreMinimal.h"
#include "CrowdAppearanceMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCrowdAppearanceMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlot;
    
    OEICROWDMANAGERRUNTIME_API FCrowdAppearanceMaterial();
};

