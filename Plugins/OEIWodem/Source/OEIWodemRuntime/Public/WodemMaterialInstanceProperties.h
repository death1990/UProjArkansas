#pragma once
#include "CoreMinimal.h"
#include "WodemMaterialInstanceProperties.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FWodemMaterialInstanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
    OEIWODEMRUNTIME_API FWodemMaterialInstanceProperties();
};

