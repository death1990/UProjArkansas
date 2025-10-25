#pragma once
#include "CoreMinimal.h"
#include "RootMotionSource_WarpToTargetBase.h"
#include "RootMotionSource_WarpToTargetAnimated.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct OEIANIMPROXYRUNTIME_API FRootMotionSource_WarpToTargetAnimated : public FRootMotionSource_WarpToTargetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    FRootMotionSource_WarpToTargetAnimated();
};

