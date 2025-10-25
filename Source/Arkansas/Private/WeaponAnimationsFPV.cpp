#include "WeaponAnimationsFPV.h"
#include "EMeshPerspective.h"

UWeaponAnimationsFPV::UWeaponAnimationsFPV() {
    this->Perspective = EMeshPerspective::FirstPerson;
    this->IdleSequence = NULL;
    this->CachedIdleSequence = NULL;
    this->StartCrouch = NULL;
    this->StopCrouch = NULL;
    this->WeaponCharge = NULL;
    this->HitReact = NULL;
    this->BlockStart = NULL;
    this->BlockIdle = NULL;
    this->BlockEnd = NULL;
    this->BlockHit = NULL;
    this->BlockRunSequence = NULL;
    this->BlockRunDirectionAimOffset = NULL;
    this->BlockLookAimOffset = NULL;
    this->DodgeLeftBlockMontage = NULL;
    this->DodgeRightBlockMontage = NULL;
    this->DodgeBackBlockMontage = NULL;
    this->DodgeForwardBlockMontage = NULL;
    this->BlockJumpSequence = NULL;
    this->BlockFallSequence = NULL;
    this->BlockLandSequence = NULL;
    this->BlockJumpAdditiveScale = 0.00f;
    this->StartCrouchBlock = NULL;
    this->StopCrouchBlock = NULL;
    this->SprintSequence = NULL;
    this->SprintStartSequence = NULL;
    this->SprintEndSequence = NULL;
    this->FineAimIdleSequence = NULL;
    this->CachedFineAimIdleSequence = NULL;
    this->FineAimJumpSequence = NULL;
    this->FineAimFallSequence = NULL;
    this->FineAimLandSequence = NULL;
    this->FineAimJumpAdditiveScale = 0.00f;
    this->StartCrouchFineAim = NULL;
    this->StopCrouchFineAim = NULL;
    this->FineAimWeaponCharge = NULL;
    this->FineAimWeaponCharge_Weapon = NULL;
    this->FineAimDodgeForwardMontage = NULL;
    this->FineAimDodgeLeftMontage = NULL;
    this->FineAimDodgeRightMontage = NULL;
    this->FineAimDodgeBackMontage = NULL;
    this->FineAimDodgeAdditiveScale = 0.00f;
    this->RecoilAdditiveSequence = NULL;
    this->FineAimRecoilAdditiveSequence = NULL;
}

UAnimSequence* UWeaponAnimationsFPV::GetWeaponChargeBonusAnim(float Progress, bool bWeaponAnim) const {
    return NULL;
}

UAnimSequence* UWeaponAnimationsFPV::GetWeaponChargeAnim(float Progress, bool bWeaponAnim) const {
    return NULL;
}

UAnimSequence* UWeaponAnimationsFPV::GetFineAimWeaponChargeBonusAnim(float Progress, bool bWeaponAnim) const {
    return NULL;
}

UAnimSequence* UWeaponAnimationsFPV::GetFineAimWeaponChargeAnim(float Progress, bool bWeaponAnim) const {
    return NULL;
}


