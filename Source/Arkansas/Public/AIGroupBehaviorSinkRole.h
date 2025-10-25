#pragma once
#include "CoreMinimal.h"
#include "AIGroupBehaviorRoleBehaviorClassRule.h"
#include "AIGroupBehaviorSinkRole.generated.h"

class AIndianaAiController;

USTRUCT(BlueprintType)
struct ARKANSAS_API FAIGroupBehaviorSinkRole {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIndianaAiController>> ActiveControllerArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIGroupBehaviorRoleBehaviorClassRule BehaviorClassRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNative: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldSinkRolePauseBehavior: 1;
    
public:
    FAIGroupBehaviorSinkRole();
};

