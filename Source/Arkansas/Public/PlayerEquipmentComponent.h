#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "EHolsterRequestType.h"
#include "EWeaponState.h"
#include "EquipmentComponent.h"
#include "PlayerEquipmentComponent.generated.h"

class UIndianaCharMovementComponent;
class UPlayerMovementComponent;
class UWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerEquipmentComponent : public UEquipmentComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeapon* QueuedWeaponToEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInhibitWeaponDownOnCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlayerPlacedMineCount;
    
public:
    UPlayerEquipmentComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnholsterWeapon_BP(EHolsterRequestType InUnholsterRequestType);
    
    UFUNCTION(BlueprintCallable)
    void PlayerTargetChanged(const bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponStateChanged(EWeaponState WeaponState, bool bEntered);
    
    UFUNCTION(BlueprintCallable)
    void OnStopSprint();
    
    UFUNCTION(BlueprintCallable)
    void OnStopCrouch(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled);
    
    UFUNCTION(BlueprintCallable)
    void OnStartSprint();
    
    UFUNCTION(BlueprintCallable)
    void OnStartCrouch(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled);
    
    UFUNCTION(BlueprintCallable)
    void OnSlideStarted(UPlayerMovementComponent* InMovementComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageEvent(const FCauseDamageInfo& CauseDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void HolsterWeapon_BP(EHolsterRequestType InRequestType);
    
};

