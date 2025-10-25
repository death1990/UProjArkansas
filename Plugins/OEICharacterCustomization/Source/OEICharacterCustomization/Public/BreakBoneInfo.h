#pragma once
#include "CoreMinimal.h"
#include "BreakBonePairs.h"
#include "BreakBoneInfo.generated.h"

USTRUCT(BlueprintType)
struct OEICHARACTERCUSTOMIZATION_API FBreakBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneBreakName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBreakBonePairs> BonePairs;
    
    FBreakBoneInfo();
};

