#pragma once
#include "CoreMinimal.h"
#include "ShotInfo.h"
#include "AsyncShotInfo.generated.h"

USTRUCT(BlueprintType)
struct FAsyncShotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShotInfo ShotInfo;
    
    ARKANSAS_API FAsyncShotInfo();
};

