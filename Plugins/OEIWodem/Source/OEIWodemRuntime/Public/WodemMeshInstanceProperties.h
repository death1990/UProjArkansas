#pragma once
#include "CoreMinimal.h"
#include "WodemMeshInstanceProperties.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FWodemMeshInstanceProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    OEIWODEMRUNTIME_API FWodemMeshInstanceProperties();
};

