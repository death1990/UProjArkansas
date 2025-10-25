#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIAnimProxyRuntime -ObjectName=EProxyTaskInterruptType -FallbackName=EProxyTaskInterruptType
#include "AIBehaviorBaseComponent.h"
#include "EAlertState.h"
#include "EStimulusType.h"
#include "PriorityNodeListenerInterface.h"
#include "AIAnimProxySupportComponent.generated.h"

class AActor;
class AAnimationProxyActor;
class AIndianaCharacter;
class AStageMarkActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIAnimProxySupportComponent : public UAIBehaviorBaseComponent, public IPriorityNodeListenerInterface {
    GENERATED_BODY()
public:
    UAIAnimProxySupportComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnequipWeaponResult(bool bResult);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetAwarenessUpdate(AActor* Target, AActor* StimulusSource, EStimulusType StimulusType, const FAIStimulus& Stimulus, EAlertState BeforeAlertState, EAlertState AfterAlertState, float BeforeAwareness, float AfterAwareness);
    
    UFUNCTION(BlueprintCallable)
    void OnMoveToAnimProxyResult(bool bResult);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipWeaponResult(bool bResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAssignedToStageMark(AIndianaCharacter* Character, AStageMarkActor* StageMark);
    
    UFUNCTION(BlueprintCallable)
    void InterruptCurrentAnimProxy(const EProxyTaskInterruptType InterruptReason, bool bCleanUpImmediately);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAnimationProxyActor* GetCurrentAnimationProxyActor() const;
    

    // Fix for true pure virtual functions not being implemented
};

