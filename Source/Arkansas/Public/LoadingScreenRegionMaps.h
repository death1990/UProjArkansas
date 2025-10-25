#pragma once
#include "CoreMinimal.h"
#include "LoadingScreenRegionMaps.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FLoadingScreenRegionMaps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> Maps;
    
    ARKANSAS_API FLoadingScreenRegionMaps();
};

