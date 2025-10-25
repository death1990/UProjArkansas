#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIGroupBehaviorDelegates.generated.h"

class UAIGroupBehaviorDelegates;

UCLASS(Blueprintable)
class UAIGroupBehaviorDelegates : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGroupBehaviorStarted, UClass*, GroupBehaviorClass, UObject*, GroupBehaviorInstanceKit);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGroupBehaviorFinished, UClass*, GroupBehaviorClass, UObject*, GroupBehaviorInstanceKit, bool, bSuccessful);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGroupBehaviorStarted OnGroupBehaviorStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGroupBehaviorFinished OnGroupBehaviorFinished;
    
    UAIGroupBehaviorDelegates();

    UFUNCTION(BlueprintCallable)
    static UAIGroupBehaviorDelegates* GetAIGroupBehaviorDelegates();
    
};

