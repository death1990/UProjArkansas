#include "FPVAnimInstance.h"

UFPVAnimInstance::UFPVAnimInstance() {
    this->NormalizedLookBlendTime = 0.50f;
    this->CurrentAimBlendTime = 6.00f;
    this->MinPlayRateWalk = 0.25f;
    this->MaxPlayRateWalk = 1.00f;
    this->SprintAnimationSpeed = 720.00f;
    this->MinPlayRateSprint = 0.65f;
    this->MaxPlayRateSprint = 1.15f;
    this->bIsDodging = false;
    this->RunAlphaMultiplier = 1.00f;
    this->RunRateMultiplier = 1.00f;
    this->PlayerCameraPitch = 0.00f;
    this->PlayerCameraRoll = 0.00f;
    this->PlayerCameraYaw = 0.00f;
    this->PlayerClimbEndYaw = 0.00f;
    this->TurnSpeed = 0.00f;
    this->LookUpSpeed = 0.00f;
    this->NormalizedTurnSpeed = 0.00f;
    this->NormalizedLookUpSpeed = 0.00f;
    this->WalkPlayRateScale = 1.00f;
    this->SprintPlayRateScale = 1.00f;
    this->CrouchMontage = NULL;
    this->CurrentDodgeMontage = NULL;
    this->bIsSliding = false;
    this->bUsedWeaponDuringSlide = false;
    this->bIsInConversation = false;
    this->bIsInPlayerConversation = false;
    this->bIsInTerminalConversation = false;
    this->StrafeSpeedInputBased = 0.00f;
    this->ForwardSpeedInputBased = 0.00f;
    this->StrafeSpeedInputBasedNormalized = 0.00f;
    this->ForwardSpeedInputBasedNormalized = 0.00f;
    this->StrafeSpeedInputBasedSmoothed = 0.00f;
    this->ForwardSpeedInputBasedSmoothed = 0.00f;
    this->StrafeSpeedInputBasedNormalizedSmoothed = 0.00f;
    this->ForwardSpeedInputBasedNormalizedSmoothed = 0.00f;
    this->NormalizedStrafeSpeed = 0.00f;
    this->NormalizedForwardSpeed = 0.00f;
    this->NormalizedSpeedBlendTime = 0.50f;
    this->IsAutomaticWeaponSuccessfullyFiringShot = 0.00f;
    this->FineAimProgressNormalizedSmoothed = 0.00f;
    this->bDisableWeaponAnims = false;
    this->PlayerMovementComponent = NULL;
    this->HolsterWeaponAnimationsFPVClass = NULL;
    this->HolsterWeaponAnimations = NULL;
    this->bIsFineAiming = false;
    this->bIsWeaponDown = false;
    this->WeaponDownTime = 0.00f;
    this->bWeaponCanAttackWhileSprinting = false;
    this->bWeaponCanAttackWhileSliding = false;
    this->bWeaponCanAttackWhileDoingParkour = false;
    this->GadgetAnimRightHandAlpha = 1.00f;
    this->QueuedThrowable = NULL;
    this->InverseAnimatedCameraStrength = 0.00f;
    this->MineDisarmMontage = NULL;
    this->bDematerializerStateMachineInProgress = false;
    this->bDematerializerLoopAnimationRequested = false;
    this->bDematerializerCancelRequested = false;
    this->bHasCatalyzingPerkSpell = false;
    this->DematerializerAnimations = NULL;
    this->SprayCatalyzingPerkSpell = NULL;
}

void UFPVAnimInstance::OnPerkSpellsApplied() {
}

void UFPVAnimInstance::OnMotionSicknessModeChanged(int32 NewMotionSicknessMode) {
}

void UFPVAnimInstance::OnEquippedWeaponUnholsterInstant(UEquipmentComponent* EquipmentComponentIn, UWeapon* Weapon) {
}

void UFPVAnimInstance::OnEquippedWeaponStartUnholster(UEquipmentComponent* UhholsterEquipmentComponent, UWeapon* Weapon) {
}

void UFPVAnimInstance::OnEquippedWeaponStartHolster(UEquipmentComponent* HolsterEquipmentComponent, UWeapon* Weapon) {
}

void UFPVAnimInstance::OnEquippedWeaponStartEquip(UWeapon* Weapon) {
}

void UFPVAnimInstance::OnEquippedWeaponHolsterInstant(UEquipmentComponent* EquipmentComponentIn, UWeapon* Weapon) {
}

void UFPVAnimInstance::OnEquippedWeaponEndUnholster(UWeapon* Weapon) {
}

void UFPVAnimInstance::OnEquippedWeaponEndUnequip(UEquipmentComponent* HolsterEquipmentComponent, UWeapon* Weapon) {
}

void UFPVAnimInstance::OnEquippedWeaponEndHolster(UWeapon* Weapon) {
}

bool UFPVAnimInstance::IsAimTransitioning() const {
    return false;
}

bool UFPVAnimInstance::IsAimOffsetEnabled() const {
    return false;
}

float UFPVAnimInstance::GetMotionSicknessWeight() const {
    return 0.0f;
}

float UFPVAnimInstance::GetHeadbobWeight() const {
    return 0.0f;
}

float UFPVAnimInstance::GetCameraJitterWeight() const {
    return 0.0f;
}

void UFPVAnimInstance::AnimNotify_OnDematerializerStateMachineComplete() {
}


