#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EWeaponEvent.h"
#include "EventEffectParams.h"
#include "ArmorVisuals.generated.h"

class AActor;
class UArmorItem;
class UArmorModItem;
class UArmorVisuals;
class UEventEffect;
class UEventEffectState;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class ARKANSAS_API UArmorVisuals : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UEventEffect*> ArmorCustomEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UEventEffect*> ArmorCustomStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UArmorItem> Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CharacterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UArmorVisuals* NextVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEventEffectState* EventEffectState;
    
public:
    UArmorVisuals();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UninitializeBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerCustomEventBP(FName EventName, const FEventEffectParams& Params);
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerCustomEvent(FName EventName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickBP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopCustomEventBP(FName EventName);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopCustomEvent(FName EventName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaveCustomStateBP(FName EventName);
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaveCustomState(FName StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModEquipped(TSoftClassPtr<UArmorModItem> ArmorMod) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterruptEventBP(EWeaponEvent WeaponEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeBP(AActor* NewTarget, UArmorItem* NewArmor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterCustomStateBP(FName EventName, const FEventEffectParams& Params);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnterCustomState(FName StateName);
    
};

