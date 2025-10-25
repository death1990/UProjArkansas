#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIInterruptIsRunningScriptDelegateDelegate.h"
#include "AIInterruptStartScriptDelegateDelegate.h"
#include "AIInterruptStopScriptDelegateDelegate.h"
#include "AIPossessable.h"
#include "EInterruptPriority.h"
#include "EInterruptPriorityBehavior.h"
#include "PriorityNodeListenerInterface.h"
#include "AIInterruptsManagerComponent.generated.h"

class AIndianaAiCharacter;
class AIndianaAiController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIInterruptsManagerComponent : public UActorComponent, public IAIPossessable, public IPriorityNodeListenerInterface {
    GENERATED_BODY()
public:
    UAIInterruptsManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void K2_InterruptStopDelegateSignature(AIndianaAiCharacter* Character, AIndianaAiController* Controller, bool bToOtherInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static void K2_InterruptStartDelegateSignature(AIndianaAiCharacter* Character, AIndianaAiController* Controller, bool bFromOtherInterrupt);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_InterruptIsRunningDelegateSignature(AIndianaAiCharacter* Character, AIndianaAiController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_AddInterrupt_NoStop(AIndianaAiController* Controller, const EInterruptPriority Priority, const EInterruptPriorityBehavior PriorityBehavior, const FString& FromWhere, const bool bDeactiveWhenDeprioritized, const bool bImmobilizeMovement, const bool bImmobilizeRootMotion, const bool bPauseBehaviorTask, const bool bPauseBehaviorTree, const bool bAllowGroupBehaviorParticipation, const bool bAllowWeaponFire, const bool bAllowOrientation, const FAIInterruptIsRunningScriptDelegate IsRunning, const FAIInterruptStartScriptDelegate Start);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_AddInterrupt(AIndianaAiController* Controller, const EInterruptPriority Priority, const EInterruptPriorityBehavior PriorityBehavior, const FString& FromWhere, const bool bDeactiveWhenDeprioritized, const bool bImmobilizeMovement, const bool bImmobilizeRootMotion, const bool bPauseBehaviorTask, const bool bPauseBehaviorTree, const bool bAllowGroupBehaviorParticipation, const bool bAllowWeaponFire, const bool bAllowOrientation, const FAIInterruptIsRunningScriptDelegate IsRunning, const FAIInterruptStartScriptDelegate Start, const FAIInterruptStopScriptDelegate Stop);
    

    // Fix for true pure virtual functions not being implemented
};

