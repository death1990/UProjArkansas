#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
#include "AnimNode_LocomotionReader.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FAnimNode_LocomotionReader : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    FAnimNode_LocomotionReader();
};

