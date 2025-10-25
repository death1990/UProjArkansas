#include "AIWeaponFiringComponent.h"

UAIWeaponFiringComponent::UAIWeaponFiringComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->FiringPatternState = EFiringPatternState::Invalid;
    this->CompleteType = EFiringPatternCompleteType::FinishBehavior;
    this->MeleeAction = EMeleeAction::Invalid;
    this->FuzzPauseScalar = 0.00f;
    this->PrePauseTime = 0.00f;
    this->BurstPauseTime = 0.00f;
    this->StartPauseTime = 0.00f;
    this->EndPauseTime = 0.00f;
    this->PauseTimer = 0.00f;
    this->NormalizedSpinUpTimer = 0.00f;
    this->BurstTimer = 0.00f;
    this->MeleeRecoveryTimer = 0.00f;
    this->MeleeRecoveryDuration = -1.00f;
    this->MeleeAddaptiveRootMotionStopDistance = 0.00f;
    this->TriggerPullCounter = 0;
    this->ShotsFiredCounter = 0;
    this->CustomShotsFiredCounter = 0;
    this->BurstRoundCounter = 0;
    this->BurstCounter = 0;
    this->CalledShotFireIndex = 0;
    this->MeleePatternIndex = 0;
    this->MeleeAttackPatternIndex = -1;
    this->LastMeleeAction = NULL;
    this->TickControl = 0;
    this->bMeleeActionIsActive = false;
    this->bMeleeIsContinuousAction = false;
    this->bMeleeRecoveryDelayActive = false;
    this->bMeleeAddaptiveRootMotionAllowed = false;
    this->bMeleeAddaptiveRootMotionStopDistAllowed = false;
    this->bMeleeAddaptiveRootMotionEnabled = false;
    this->bMeleeCollisionEnabled = false;
    this->bScopeEnabled = false;
    this->bCanReloadAtEnd = false;
    this->bCanFireWithoutAim = false;
    this->bCalledShot = false;
    this->bAllowAutoReload = false;
    this->bCalledShotMelee = false;
    this->bActivatedCalledShot = false;
    this->bActivatedCalledShotMelee = false;
    this->bActiveFiringPatternPopulated = false;
    this->bActiveFiringPatternGenerated = false;
}

void UAIWeaponFiringComponent::Weapon_OnWeaponSettingsUpdated(UAISettings_Weapon* WeaponSettings) {
}

void UAIWeaponFiringComponent::Weapon_OnWeaponEndUnequip(UEquipmentComponent* EquipmentComponent, UWeapon* Weapon) {
}

void UAIWeaponFiringComponent::Weapon_OnWeaponEndEquip(UEquipmentComponent* EquipmentComponent, UWeapon* Weapon) {
}

void UAIWeaponFiringComponent::Throwable_OnThrowStarted(const UThrowable* Throwable) {
}

void UAIWeaponFiringComponent::Throwable_OnThrowProjectileDeployed(UThrowable* Throwable, AProjectile* Projectile) {
}

void UAIWeaponFiringComponent::Throwable_OnThrowEnded(UThrowable* Throwable) {
}

void UAIWeaponFiringComponent::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

bool UAIWeaponFiringComponent::HasValidMeleeAttackPatternAtIndex(int32 InMeleePatternIndex) const {
    return false;
}


