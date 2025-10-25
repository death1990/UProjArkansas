#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ComponentDebugInterface.h"
#include "DynamicEffectProperties.h"
#include "OnAddStatusEffectBPDelegate.h"
#include "OnRemoveStatusEffectBPDelegate.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectManagerComponent.generated.h"

class AActor;
class UHealthComponent;
class URpgStat;
class URpgStatComponent;
class USpell;
class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatusEffectManagerComponent : public UActorComponent, public IComponentDebugInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> StatusEffectsToClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URpgStatComponent* StatComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddStatusEffectBP OnAddStatusEffectBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRemoveStatusEffectBP OnRemoveStatusEffectBP;
    
    UStatusEffectManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExistingStatusEffectDynamicProperties(TSubclassOf<USpell> Spell, FDynamicEffectProperties InDynamicProperties);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStatusEffectsOfClass(TSubclassOf<UStatusEffect> Data);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void PreventHostileStatusEffectsOnCompanions(bool bPreventHostileStatusEffectsIn, bool bShouldClear);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PreventHostileStatusEffectsNPC(bool bPreventHostileStatusEffectsIn, bool bShouldClear);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void PreventHostileStatusEffects(bool bPreventHostileStatusEffectsIn, bool bShouldClear);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void PreventAllStatusEffectsOnCompanions(bool bPreventStatusEffectsIn, bool bShouldClear);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PreventAllStatusEffectsNPC(bool bPreventStatusEffectsIn, bool bShouldClear);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void PreventAllStatusEffects(bool bPreventStatusEffectsIn, bool bShouldClear);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatusEffectStackCountFromSpell(TSubclassOf<USpell> Spell) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatusEffectStackCount(TSubclassOf<UStatusEffect> StatusEffect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumHostileStatusEffects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDynamicEffectProperties GetExistingStatusEffectDynamicProperties(TSubclassOf<USpell> Spell) const;
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void ClearStatusEffectOnCompanions(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearStatusEffectNPC(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearStatusEffect(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearAllStatusEffectsOnCompanions(bool bOnlyHostile);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearAllStatusEffectsNPC(bool bOnlyHostile);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void ClearAllStatusEffects(bool bOnlyHostile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPHasStatusEffect(TSubclassOf<UStatusEffect> StatusEffect) const;
    
    UFUNCTION(BlueprintCallable)
    void BPAddEffect(TSubclassOf<UStatusEffect> Data, AActor* Origin, const FDynamicEffectProperties& EffectProperties);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void AddStatusEffectToCompanions(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddStatusEffectNPC(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddStatusEffect(const FString& Name);
    

    // Fix for true pure virtual functions not being implemented
};

