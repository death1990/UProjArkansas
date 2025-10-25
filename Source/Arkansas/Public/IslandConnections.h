#pragma once
#include "CoreMinimal.h"
#include "IslandConnections.generated.h"

USTRUCT(BlueprintType)
struct FIslandConnections {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, uint32> Connections;
    
    ARKANSAS_API FIslandConnections();
};

