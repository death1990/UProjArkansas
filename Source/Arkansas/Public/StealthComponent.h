#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ComponentDebugInterface.h"
#include "DetectionLevelChangedDelegateDelegate.h"
#include "ECompanionCommand.h"
#include "ECrimeType.h"
#include "OnStealthChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "StealthComponent.generated.h"

class AActor;
class AIndianaAiCharacter;
class AIndianaCharacter;
class AOwCrowdActor;
class ARestrictedArea;
class UFactionData;
class UIndianaCharMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStealthComponent : public UActorComponent, public IComponentDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDetectionLevelChangedDelegate DetectionLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStealthChanged OnStealthChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickpocketClearTime;
    
public:
    UStealthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnTerminalHackStarted(AActor* Terminal);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStopStealth(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled);
    
    UFUNCTION(BlueprintCallable)
    void OnStartStealth(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRestrictedAreaExited(const ARestrictedArea* RestrictedArea);
    
    UFUNCTION(BlueprintCallable)
    void OnRestrictedAreaEntered(const ARestrictedArea* RestrictedArea);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCombatStateChange(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring);
    
    UFUNCTION(BlueprintCallable)
    void OnLockpickStarted(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnCompanionCommandSuccess(ECompanionCommand CompanionCommand, int32 CompanionIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBumped(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_WasCrimeWitnessedByGuard(const FGuid& CrimeID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_GetCrimeWitnesses(const FGuid& CrimeID, TArray<AIndianaAiCharacter*>& OutAiWitnesses, TArray<AOwCrowdActor*>& OutCrowdWitnesses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_GetCrimeVictimFaction(const FGuid& CrimeID, TSubclassOf<UFactionData>& OutVictimFaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_GetCrimeType(const FGuid& CrimeID, ECrimeType& OutCrimeType) const;
    

    // Fix for true pure virtual functions not being implemented
};

