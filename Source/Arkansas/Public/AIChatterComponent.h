#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "AIPossessable.h"
#include "CauseDamageInfo.h"
#include "ChatterComponent.h"
#include "EAlertState.h"
#include "ECompanionCommand.h"
#include "AIChatterComponent.generated.h"

class AActor;
class AIndianaAiController;
class AIndianaCharacter;
class UHealthComponent;
class UThrowable;
class UWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class UAIChatterComponent : public UChatterComponent, public IAIPossessable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlarmHeardPlayerDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthIdleChatterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealthIdleTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatTauntMinimumTimeInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatTauntTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrimeNonGuardOutlawUpdateChatterDelay;
    
public:
    UAIChatterComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TickStealthIdleChatter();
    
    UFUNCTION(BlueprintCallable)
    void TickCrimeChatter(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickCombatTauntChatter();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponStartReload(UWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void OnThrowableAnimationStarted(const UThrowable* Throwable);
    
    UFUNCTION(BlueprintCallable)
    void OnRevivedPlayer();
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedFriendlyFire(AActor* InAttacker);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerAtLowHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnKill(AActor* InKiller, AActor* InKilledTarget, const FCauseDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(UHealthComponent* InHealthComponent, float PrevNormalizedHealth, float CurrentNormalizedHealth, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void OnCrimeResponseStop(AIndianaAiController* InController, const FGuid CrimeID);
    
    UFUNCTION(BlueprintCallable)
    void OnCrimeResponseStart(AIndianaAiController* InController, const FGuid CrimeID);
    
    UFUNCTION(BlueprintCallable)
    void OnCompanionCommandFail(ECompanionCommand CompanionCommand, int32 CompanionSlotValue);
    
    UFUNCTION(BlueprintCallable)
    void OnCompanionCommandCooldownEnd(ECompanionCommand Command, int32 CompanionIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChange(AIndianaCharacter* InCharacter, bool bIsInCombat, bool bRestoring);
    
    UFUNCTION(BlueprintCallable)
    void OnAlertStateChange(AActor* TargetActor, EAlertState PreviousAlertState, EAlertState TargetAlertState, bool bRestoring);
    

    // Fix for true pure virtual functions not being implemented
};

