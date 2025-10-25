#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorBaseComponent.h"
#include "AIPatrolSupportComponent.generated.h"

class APatrolNode;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIPatrolSupportComponent : public UAIBehaviorBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APatrolNode> CurrentPatrolNode;
    
public:
    UAIPatrolSupportComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCurrentPatrolNodeIndex(APatrolNode* Node, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPatrolNodeTeleportCompleted(APatrolNode* PatrolNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPatrolNodeIndex(APatrolNode* Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APatrolNode* GetCurrentPatrolNode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTeleportToPatrolNode(const APatrolNode* PatrolNode) const;
    
};

