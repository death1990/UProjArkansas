#include "PlayerEquipmentComponent.h"

UPlayerEquipmentComponent::UPlayerEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->MedKitConsumableSlots.AddDefaulted(4);
    this->GadgetSlots.AddDefaulted(6);
    this->ThrowableSlots.AddDefaulted(4);
    this->QueuedWeaponToEquip = NULL;
    this->bInhibitWeaponDownOnCrouch = false;
    this->MaxPlayerPlacedMineCount = 100;
}

void UPlayerEquipmentComponent::UnholsterWeapon_BP(EHolsterRequestType InUnholsterRequestType) {
}

void UPlayerEquipmentComponent::PlayerTargetChanged(const bool bAdded) {
}

void UPlayerEquipmentComponent::OnWeaponStateChanged(EWeaponState WeaponState, bool bEntered) {
}

void UPlayerEquipmentComponent::OnStopSprint() {
}

void UPlayerEquipmentComponent::OnStopCrouch(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled) {
}

void UPlayerEquipmentComponent::OnStartSprint() {
}

void UPlayerEquipmentComponent::OnStartCrouch(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled) {
}

void UPlayerEquipmentComponent::OnSlideStarted(UPlayerMovementComponent* InMovementComponent) {
}

void UPlayerEquipmentComponent::OnDamageEvent(const FCauseDamageInfo& CauseDamageInfo) {
}

void UPlayerEquipmentComponent::HolsterWeapon_BP(EHolsterRequestType InRequestType) {
}


