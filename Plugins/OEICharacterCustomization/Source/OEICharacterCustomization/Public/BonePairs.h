#pragma once
#include "CoreMinimal.h"
#include "BonePairs.generated.h"

USTRUCT(BlueprintType)
struct FBonePairs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneToStartFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneToEndAt;
    
    OEICHARACTERCUSTOMIZATION_API FBonePairs();
};

