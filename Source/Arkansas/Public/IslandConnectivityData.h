#pragma once
#include "CoreMinimal.h"
#include "IslandConnections.h"
#include "IslandConnectivityData.generated.h"

USTRUCT(BlueprintType)
struct FIslandConnectivityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FIslandConnections> Islands;
    
    ARKANSAS_API FIslandConnectivityData();
};

