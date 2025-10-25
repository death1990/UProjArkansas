#include "CharacterAnimInstance.h"

UCharacterAnimInstance::UCharacterAnimInstance() {
    this->DefaultWeaponAnimationsTemplate = NULL;
    this->DefaultWeaponAnimations = NULL;
    this->WeaponAnimations = NULL;
    this->WeaponAnimationsOverride = NULL;
    this->CurrentWeaponAnimations = NULL;
    this->LocomotionAnimationSet = NULL;
    this->MovementState = EAnimMovementState::OnGround;
    this->MovementModifierState = EAnimMovementModifierState::None;
    this->bDoingParkour = false;
    this->LadderState = EAnimLadderState::EnterBottom;
    this->bIsUsingLadderAnimations = false;
    this->ThrowableAnimInstance = NULL;
    this->LastFallDistance = 0.00f;
    this->bIsEquipping = false;
    this->bIsUnequipping = false;
    this->bIsBlocking = false;
    this->bIsReloading = false;
    this->bIsBeingBumped = false;
    this->bIsHitReacting = false;
    this->HitReactStrength = 0.00f;
    this->HitReactX = 0.00f;
    this->HitReactY = 0.00f;
    this->ForwardSpeed = 0.00f;
    this->StrafeSpeed = 0.00f;
    this->NormalizedSpeed = 0.00f;
    this->bIsFullyCrouched = false;
    this->CrouchedProgressNormalized = 0.00f;
    this->bWeaponIsHolstered = false;
    this->CurrentHolsterState = EHolsterState::Holstered;
    this->bHelmetIsVisible = false;
    this->WeaponCharge = 0.00f;
    this->WeaponAnimCharge = 0.00f;
    this->WeaponRampSpeed = 0.00f;
    this->HealthState = EStateOfBeing::Healthy;
    this->bIsDowned = false;
    this->bIsHealthy = true;
    this->bHasRecentlyMoved = false;
    this->FacePoses = NULL;
}

void UCharacterAnimInstance::SetDisabledAnimation(FAnimEventGameplayTagContainer Container) {
}

void UCharacterAnimInstance::OnUseLadderAnimations(bool bIsUsingLadderAnimationsIn) {
}

void UCharacterAnimInstance::OnThrowableUnequipped(UThrowable* Throwable) {
}

void UCharacterAnimInstance::OnThrowableEquipped(UThrowable* Throwable) {
}




void UCharacterAnimInstance::OnMovementLanded(UIndianaCharMovementComponent* InMovementComponent, float Distance) {
}

bool UCharacterAnimInstance::MatchesWeaponCategoryTag(FGameplayTag WeaponCategoryTag) const {
    return false;
}

bool UCharacterAnimInstance::MatchesArmorTypeTag(FGameplayTag ArmorTypeTag) const {
    return false;
}

bool UCharacterAnimInstance::IsThrowStateMachineInProgress() const {
    return false;
}

bool UCharacterAnimInstance::IsMontagePlayingOnSlot(FName SlotNodeName) const {
    return false;
}

bool UCharacterAnimInstance::IsCurrentHolsterState(EHolsterState HolsterState) const {
    return false;
}

void UCharacterAnimInstance::GetMontagePlayingStatusOfSlot(FName SlotNodeName, float CurrentWeight, bool& Playing, bool& Additive, bool& HasRootMotion, float& Weight) const {
}


