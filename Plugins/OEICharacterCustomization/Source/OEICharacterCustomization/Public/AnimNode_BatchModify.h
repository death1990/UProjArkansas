#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
#include "AnimNode_BatchModify.generated.h"

USTRUCT(BlueprintType)
struct OEICHARACTERCUSTOMIZATION_API FAnimNode_BatchModify : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    FAnimNode_BatchModify();
};

