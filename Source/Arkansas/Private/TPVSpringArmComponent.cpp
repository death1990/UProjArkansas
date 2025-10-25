#include "TPVSpringArmComponent.h"

UTPVSpringArmComponent::UTPVSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultFineAimPlayLength = 0.25f;
    this->Whiskers = NULL;
    this->TPVCamera = NULL;
    this->PitchTargetArmLengthCurve = NULL;
    this->TPVNearPitchTargetArmLengthCurve = NULL;
    this->OwningPlayer = NULL;
}

void UTPVSpringArmComponent::SetUseSecondaryShoulder(bool bUseSecondaryShoulder) {
}

void UTPVSpringArmComponent::OnWeaponStartUnHolster(UEquipmentComponent* EquipmentComponent, UWeapon* Weapon) {
}

void UTPVSpringArmComponent::OnWeaponStartHolster(UEquipmentComponent* EquipmentComponent, UWeapon* Weapon) {
}

void UTPVSpringArmComponent::OnWeaponStartEquip(UWeapon* Weapon) {
}

void UTPVSpringArmComponent::OnTPVCameraDeactivated(UActorComponent* Component) {
}

void UTPVSpringArmComponent::OnFineAimStarted() {
}

void UTPVSpringArmComponent::OnFineAimEnded() {
}

void UTPVSpringArmComponent::ApplyWeaponOffsets(UWeapon* Weapon) {
}


