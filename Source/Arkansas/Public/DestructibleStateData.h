#pragma once
#include "CoreMinimal.h"
#include "DestructibleStateData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FDestructibleStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    ARKANSAS_API FDestructibleStateData();
};

