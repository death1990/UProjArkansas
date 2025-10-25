#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMeshPerspective.h"
#include "EWeaponEvent.h"
#include "EWeaponState.h"
#include "EventEffectParams.h"
#include "LerpTimer.h"
#include "WeaponVisualModOverride.h"
#include "WeaponVisuals.generated.h"

class AActor;
class UEventEffect;
class UEventEffectState;
class USkeletalMeshComponent;
class UWeapon;
class UWeaponMod;
class UWeaponVisuals;

UCLASS(Abstract, Blueprintable, DefaultToInstanced)
class ARKANSAS_API UWeaponVisuals : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshPerspective Perspective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponEvent, float> AnimationDurationOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EWeaponEvent, UEventEffect*> WeaponEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EWeaponState, UEventEffect*> WeaponStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UEventEffect*> WeaponCustomEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UEventEffect*> WeaponCustomStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponVisualModOverride WeaponModEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeapon* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CharacterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeaponVisuals* PreviousVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeaponVisuals* NextVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEventEffectState* EventEffectState;
    
public:
    UWeaponVisuals();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UninitializeBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerEventBP(EWeaponEvent WeaponEvent, const FEventEffectParams& Params);
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerDamageTypeMuzzleFx();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerCustomEventBP(FName EventName, const FEventEffectParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickBP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopCustomEventBP(FName EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaveStateBP(EWeaponState WeaponState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaveCustomStateBP(FName EventName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModEquipped(TSoftClassPtr<UWeaponMod> WeaponMod) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterruptEventBP(EWeaponEvent WeaponEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeBP(AActor* NewTarget, UWeapon* NewWeapon);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeapon* GetOwningWeapon() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoPerShot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterStateBP(EWeaponState WeaponState, const FEventEffectParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterCustomStateBP(FName EventName, const FEventEffectParams& Params);
    
    UFUNCTION(BlueprintCallable)
    void CreateLerpTimer(const FLerpTimer& TimerProperties);
    
};

