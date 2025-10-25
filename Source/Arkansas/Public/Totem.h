#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "Destructible.h"
#include "Templates/SubclassOf.h"
#include "Totem.generated.h"

class AActor;
class AIndianaCharacter;
class UPrimitiveComponent;
class USpellConditional;
class USphereComponent;
class UStatusEffect;

UCLASS(Blueprintable)
class ATotem : public ADestructible {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* EffectOverlapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    TArray<USpellConditional*> TargetConditionals;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIndianaCharacter>> AffectedCharacters;
    
public:
    ATotem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnTotemDeactivated(FGuid ActiveID, AIndianaCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnTotemActivated(FGuid ActiveID, AIndianaCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnActorExited(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEntered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void Detonate_BP();
    
};

