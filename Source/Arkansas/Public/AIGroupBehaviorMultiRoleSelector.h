#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIGroupBehaviorMultiRoleSelector.generated.h"

class UAIGroupBehavior;

USTRUCT(BlueprintType)
struct FAIGroupBehaviorMultiRoleSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIGroupBehavior> AIGroupBehaviorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RoleNames;
    
    ARKANSAS_API FAIGroupBehaviorMultiRoleSelector();
};

