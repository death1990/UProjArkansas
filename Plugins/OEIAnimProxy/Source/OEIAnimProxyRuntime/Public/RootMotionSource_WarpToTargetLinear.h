#pragma once
#include "CoreMinimal.h"
#include "RootMotionSource_WarpToTargetBase.h"
#include "RootMotionSource_WarpToTargetLinear.generated.h"

USTRUCT(BlueprintType)
struct OEIANIMPROXYRUNTIME_API FRootMotionSource_WarpToTargetLinear : public FRootMotionSource_WarpToTargetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToFloor;
    
    FRootMotionSource_WarpToTargetLinear();
};

