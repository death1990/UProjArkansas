#pragma once
#include "CoreMinimal.h"
#include "AsyncShotInfo.h"
#include "InstantShotGrouping.generated.h"

USTRUCT(BlueprintType)
struct FInstantShotGrouping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAsyncShotInfo> AsyncShots;
    
    ARKANSAS_API FInstantShotGrouping();
};

