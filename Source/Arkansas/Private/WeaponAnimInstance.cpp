#include "WeaponAnimInstance.h"

UWeaponAnimInstance::UWeaponAnimInstance() {
    this->Weapon = NULL;
    this->WeaponCharge = 0.00f;
    this->WeaponAnimCharge = 0.00f;
    this->WeaponRampSpeed = 0.00f;
    this->PrimaryDamageType = EIndianaDamageType::Physical;
    this->SecondaryDamageType = EIndianaDamageType::Physical;
    this->bIsCrouching = false;
    this->bIsFineAiming = false;
    this->FineAimProgressNormalizedSmoothed = 0.00f;
    this->bIsIdle = false;
    this->bIsAmmoPoolEmpty = false;
    this->bHasValidIdleSequence = false;
    this->bHasValidFineAimIdleSequence = false;
    this->bHasValidEmptyIdleSequence = false;
    this->bHasValidEmptyFineAimIdleSequence = false;
    this->bHasValidChargeSequence = false;
    this->bIsCharacterInCombat = false;
    this->IdleSequence = NULL;
    this->FineAimIdleSequence = NULL;
    this->EmptyIdleSequence = NULL;
    this->EmptyFineAimIdleSequence = NULL;
    this->ChargeSequence = NULL;
    this->WeaponAnimations = NULL;
    this->WeaponAnimationsFPV = NULL;
    this->bHasValidFPVWeaponAnimations = false;
    this->bIsPlayerP3P = false;
    this->bIsCharacterMoving = false;
}

bool UWeaponAnimInstance::WeaponCharging() const {
    return false;
}

void UWeaponAnimInstance::OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent, FName OptionalSocket) {
}

bool UWeaponAnimInstance::IsInCombat() const {
    return false;
}



