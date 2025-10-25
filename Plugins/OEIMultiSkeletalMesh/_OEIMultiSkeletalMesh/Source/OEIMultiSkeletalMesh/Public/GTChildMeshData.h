#pragma once
#include "CoreMinimal.h"
#include "GTChildMeshData.generated.h"

class UMaterialInterface;
class USkinnedAsset;

USTRUCT(BlueprintType)
struct FGTChildMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinnedAsset* SkinnedAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
    OEIMULTISKELETALMESH_API FGTChildMeshData();
};

