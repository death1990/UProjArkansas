#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CastingParams.h"
#include "ComponentDebugInterface.h"
#include "ESpellCastResult.h"
#include "EventResponder.h"
#include "SpellInstance.h"
#include "SpellSet.h"
#include "Templates/SubclassOf.h"
#include "SpellManagerComponent.generated.h"

class AActor;
class UHealthComponent;
class USpell;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpellManagerComponent : public UActorComponent, public IComponentDebugInterface, public IEventResponder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<USpell>, FSpellInstance> PersistentSpells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpellSet PassiveSpellSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<USpell>, float> SpellEventCooldowns;
    
public:
    USpellManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpell(const TSubclassOf<USpell>& SpellType) const;
    
    UFUNCTION(BlueprintCallable)
    ESpellCastResult CastSpellWithTarget_BP(const TSubclassOf<USpell>& SpellType, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    ESpellCastResult CastSpell(const TSubclassOf<USpell>& SpellType, const FCastingParams& CastingParams);
    

    // Fix for true pure virtual functions not being implemented
};

