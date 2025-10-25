#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BoneMotionKey.generated.h"

USTRUCT(BlueprintType)
struct FBoneMotionKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Motion;
    
    ARKANSAS_API FBoneMotionKey();
};

