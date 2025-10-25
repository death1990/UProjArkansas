#pragma once
#include "CoreMinimal.h"
#include "AIGroupBehaviorBranch.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIGroupBehaviorBranch {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BranchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNative: 1;
    
public:
    FAIGroupBehaviorBranch();
};

