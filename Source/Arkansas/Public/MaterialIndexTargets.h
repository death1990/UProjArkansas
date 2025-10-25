#pragma once
#include "CoreMinimal.h"
#include "MaterialIndexTargets.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialIndexTargets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TargetMaterialIndices;
    
    ARKANSAS_API FMaterialIndexTargets();
};

