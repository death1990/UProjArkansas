#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIPossessable.h"
#include "AlertStateChangeDelegateDelegate.h"
#include "CauseDamageInfo.h"
#include "EAlertState.h"
#include "OnDetectedDeadBodyDelegateDelegate.h"
#include "PlayerProximityChangeDelegateDelegate.h"
#include "TimeoutFiringBehindCoverWithoutLoSDelegateDelegate.h"
#include "AIDetectionComponent.generated.h"

class AActor;
class AIndianaAiCharacter;
class AIndianaCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIDetectionComponent : public UActorComponent, public IAIPossessable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlertStateChangeDelegate OnAlertStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerProximityChangeDelegate OnPlayerProximityChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDetectedDeadBodyDelegate OnDeadBodyDetected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeoutFiringBehindCoverWithoutLoSDelegate TimeoutFiringBehindCoverWithoutLoSDelegate;
    
    UAIDetectionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamageEvent(const FCauseDamageInfo& CauseDamageInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnConversationInterruptCompleted(AIndianaAiCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChange(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerTimeSinceThreatened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerTimeSinceBecameAware() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerAwarenessTimeRemainingEstimate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerAwarenessMeter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAlertState GetPlayerAlertState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAwarenessTimeRemainingEstimate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAwarenessMeter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAlertState GetAlertState() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceHostilePlayerRelationship();
    
    UFUNCTION(BlueprintCallable)
    void ForceFullDetection(AActor* DetectedActor, const FVector ExternalStimulusLocation, const bool bPermitArkansasAI);
    

    // Fix for true pure virtual functions not being implemented
};

