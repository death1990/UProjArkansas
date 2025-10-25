#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIGroupBehaviorBranchSelector.generated.h"

class UAIGroupBehavior;

USTRUCT(BlueprintType)
struct FAIGroupBehaviorBranchSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIGroupBehavior> AIGroupBehaviorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BranchName;
    
    ARKANSAS_API FAIGroupBehaviorBranchSelector();
};

