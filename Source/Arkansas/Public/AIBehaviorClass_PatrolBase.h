#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorClass_BlueprintBase.h"
#include "AIBehaviorClass_PatrolBase.generated.h"

class APatrolNode;
class UAIPatrolSupportComponent;

UCLASS(Blueprintable)
class ARKANSAS_API UAIBehaviorClass_PatrolBase : public UAIBehaviorClass_BlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APatrolNode* FirstPatrolNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArrivedAtPatrolNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowArrived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecutePatrolNodeRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngleForStopAtPatrolPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolRetryRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastMovementRequestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateLocoStateDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APatrolNode*> PatrolNodeArray;
    
public:
    UAIBehaviorClass_PatrolBase();

    UFUNCTION(BlueprintCallable)
    void UpdateLocomotionWalkStops(bool bEnable, float DelayTimer);
    
    UFUNCTION(BlueprintCallable)
    void SetNextPatrolNodeIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestartPatrol();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishMoveToPatrolNode(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnExecutePatrolNodeArrived(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePatrolNodeAction(bool bFromLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPatrolSupportComponent* GetPatrolSupportComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextPatrolNodeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APatrolNode* GetNextPatrolNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APatrolNode* GetLastPatrolNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPatrolNodeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APatrolNode* GetCurrentPatrolNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecutePatrolNode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckArrivedAtNode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanArriveEarly() const;
    
    UFUNCTION(BlueprintCallable)
    bool AdvancePatrolNode();
    
};

