#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClass.h"
#include "EAIMovementState.h"
#include "EAnimTreeState.h"
#include "AIBehaviorClass_ProtestKill.generated.h"

class UOwConversationInstance;

UCLASS(Blueprintable)
class ARKANSAS_API UAIBehaviorClass_ProtestKill : public UAIBehaviorClass {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToPlayerBeforeConversationStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIMovementState MovementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimTreeState AnimationState;
    
public:
    UAIBehaviorClass_ProtestKill();

protected:
    UFUNCTION(BlueprintCallable)
    void OnConversationShutdown(UOwConversationInstance* ConversationInstance);
    
};

