#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AIGroupBehaviorInstanceKit.h"
#include "CauseDamageInfo.h"
#include "ComponentDebugInterface.h"
#include "ECompanionSlot.h"
#include "EGameDifficulty.h"
#include "EHUDWidgetVisibilityMode.h"
#include "ESpecialObsidianID.h"
#include "OnCompanionStealthChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CompanionManagerComponent.generated.h"

class AActor;
class AIndianaAiCharacter;
class UCharacterInfoComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UCompanionManagerComponent : public UActorComponent, public IAIGroupBehaviorInstanceKit, public IComponentDebugInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIndianaAiCharacter>> ActiveCompanions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AIndianaAiCharacter>> StartingCompanionList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompanionStealthChanged OnStealthChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostileAutoDetectionPlayerLineOfSightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostileAutoDetectionPlayerDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompanionTriggerObservationChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecruitedCommandChargePercentage;
    
public:
    UCompanionManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCompanionsCanSelfRevive();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCompanionOutlineMode(EHUDWidgetVisibilityMode OutlineMode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCompanionHelmetVisibility(int32 HelmetVisibility);
    
public:
    UFUNCTION(BlueprintCallable)
    void SendCharacterToShip(AIndianaAiCharacter* Companion);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCompanionFromPartyByRefBP(AIndianaAiCharacter* Companion, bool bDespawn);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveCompanionFromPartyBP(ESpecialObsidianID CompanionID, bool bDespawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerTakeDamage(const FCauseDamageInfo& DamageInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLevelChanged(UCharacterInfoComponent* InCharacterInfoComponent, int32 PlayerLevel);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDifficultyChanged(EGameDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void OnCauseDamage(const FCauseDamageInfo& CauseDamageInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiCharacter* GetOtherCompanion(AIndianaAiCharacter* Companion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCompanionSlotIndex(AIndianaAiCharacter* InCompanion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiCharacter* GetCompanionFromSlot(ECompanionSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiCharacter* GetActiveCompanionWithSpecialID(ESpecialObsidianID SpecialID) const;
    
    UFUNCTION(BlueprintCallable)
    static void DismissCompanionBP(ESpecialObsidianID CompanionID, bool bDespawn);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugKillCompanions();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void AddPerkPointsToCompanions(int32 Points);
    
    UFUNCTION(BlueprintCallable)
    static void AddCompanionToPartyByRefBP(AIndianaAiCharacter* Companion);
    
    UFUNCTION(BlueprintCallable)
    static void AddCompanionToPartyBP(ESpecialObsidianID CompanionID, bool bPromptPartySelect);
    

    // Fix for true pure virtual functions not being implemented
};

