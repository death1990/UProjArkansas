#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "AnimNode_BatchModify.generated.h"

USTRUCT(BlueprintType)
struct OEICHARACTERCUSTOMIZATION_API FAnimNode_BatchModify : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    FAnimNode_BatchModify();
};

