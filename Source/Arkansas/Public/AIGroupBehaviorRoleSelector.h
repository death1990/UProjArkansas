#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIGroupBehaviorRoleSelector.generated.h"

class UAIGroupBehavior;

USTRUCT(BlueprintType)
struct FAIGroupBehaviorRoleSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIGroupBehavior> AIGroupBehaviorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RoleName;
    
    ARKANSAS_API FAIGroupBehaviorRoleSelector();
};
FORCEINLINE uint32 GetTypeHash(const FAIGroupBehaviorRoleSelector) { return 0; }

