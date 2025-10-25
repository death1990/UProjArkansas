#include "WeaponAnimations.h"

UWeaponAnimations::UWeaponAnimations() {
    this->bUseAltIKTargets = false;
    this->bDisableArmIK = false;
    this->JumpSequence = NULL;
    this->FallSequence = NULL;
    this->LandSequence = NULL;
    this->DeathMontages = NULL;
    this->CowerMontage = NULL;
    this->CowerEndMontage = NULL;
    this->DodgeLeftMontage = NULL;
    this->DodgeRightMontage = NULL;
    this->DodgeBackMontage = NULL;
    this->DodgeForwardMontage = NULL;
    this->ParkourAnimations = NULL;
    this->DropDownAnimations = NULL;
    this->JumpAcrossAnimations = NULL;
    this->bUseFancyReload = false;
    this->ReloadInstantCancelBlendOutTime = 0.25f;
    this->bUseModSpecificReload = false;
    this->WeaponIdleSequence = NULL;
    this->WeaponEmptyIdleSequence = NULL;
    this->WeaponFineAimIdleSequence = NULL;
    this->WeaponEmptyFineAimIdleSequence = NULL;
    this->WeaponCharge_Weapon = NULL;
    this->CachedWeaponIdleSequence = NULL;
    this->CachedWeaponEmptyIdleSequence = NULL;
    this->CachedWeaponFineAimIdleSequence = NULL;
    this->CachedWeaponEmptyFineAimIdleSequence = NULL;
    this->CachedWeaponChargeSequence = NULL;
    this->XRayGadgetActivateMontage = NULL;
    this->XRayGadgetDeactivateMontage = NULL;
    this->bCanFireWhileEquippingGadget = false;
}

FCowerMontagePair UWeaponAnimations::GetCowerMontagePair() const {
    return FCowerMontagePair{};
}


