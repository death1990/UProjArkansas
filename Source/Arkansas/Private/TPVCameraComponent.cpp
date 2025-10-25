#include "TPVCameraComponent.h"

UTPVCameraComponent::UTPVCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultFineAimPlayLength = 0.25f;
    this->AlignmentMaxPitch = 60.00f;
    this->TPVCameraSettingsDataAsset = NULL;
    this->YawOffset = 0.00f;
    this->SpringArmScale = 1.00f;
    this->OwningPlayer = NULL;
    this->TPVSpringArmComponent = NULL;
    this->PitchFOVCurve = NULL;
    this->DefaultNearPitchFOVCurve = NULL;
}

void UTPVCameraComponent::SetUseSecondaryShoulder(bool bUseSecondaryShoulder) {
}

void UTPVCameraComponent::OnWeaponStartHolster(UEquipmentComponent* EquipmentComponent, UWeapon* Weapon) {
}

void UTPVCameraComponent::OnWeaponStartEquip(UWeapon* Weapon) {
}

void UTPVCameraComponent::OnWeaponEndUnHolster(UWeapon* Weapon) {
}

void UTPVCameraComponent::OnParkourStarted(const FParkourMove& ParkourMove) {
}

void UTPVCameraComponent::OnParkourEnded(const FParkourMove& ParkourMove) {
}

void UTPVCameraComponent::OnLadderClimbStarted() {
}

void UTPVCameraComponent::OnLadderClimbEnded() {
}

void UTPVCameraComponent::OnFineAimStarted() {
}

void UTPVCameraComponent::OnFineAimEnded() {
}

void UTPVCameraComponent::OnFieldOfViewSettingChanged(float NewFOV) {
}

void UTPVCameraComponent::OnCrouchStarted(UIndianaCharMovementComponent* MovementComponent, bool bPlayerToggled) {
}

void UTPVCameraComponent::OnCrouchEnded(UIndianaCharMovementComponent* MovementComponent, bool bPlayerToggled) {
}

void UTPVCameraComponent::ApplyWeaponOffsets(UWeapon* EquippedWeapon) {
}


