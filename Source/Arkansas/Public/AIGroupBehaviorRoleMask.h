#pragma once
#include "CoreMinimal.h"
#include "AIGroupBehaviorRoleMask.generated.h"

USTRUCT(BlueprintType)
struct FAIGroupBehaviorRoleMask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 RoleMaskValue;
    
    ARKANSAS_API FAIGroupBehaviorRoleMask();
};

