#pragma once
#include "CoreMinimal.h"
#include "AIGroupBehaviorRoleCrossCheck.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIGroupBehaviorRoleCrossCheck {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RoleNameA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RoleNameB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RoleCrossCheckName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNative: 1;
    
public:
    FAIGroupBehaviorRoleCrossCheck();
};

