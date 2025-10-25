#include "TPVWhiskerComponent.h"

UTPVWhiskerComponent::UTPVWhiskerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IdleCameraComponent = NULL;
    this->OwningPlayer = NULL;
    this->P1PWhiskerSettings = NULL;
    this->WhiskerState = EWhiskerState::Clear;
    this->WhiskerSettingsDataAsset = NULL;
}

void UTPVWhiskerComponent::TPVCameraSaveWhiskerSettings() {
}

void UTPVWhiskerComponent::SetUseSecondaryShoulder(bool bUseSecondaryShoulder) {
}

void UTPVWhiskerComponent::OnStartParkour(const FParkourMove& ParkourMove) {
}

void UTPVWhiskerComponent::OnPlayerPerspectiveChanged(bool bIsThirdPerson) {
}

void UTPVWhiskerComponent::OnPlayerItemEquipped(UItem* Item) {
}

void UTPVWhiskerComponent::OnEndParkour(const FParkourMove& ParkourMove) {
}

void UTPVWhiskerComponent::OnCombatStateChanged(AIndianaCharacter* Character, bool bIsInCombat, bool bRestoring) {
}

void UTPVWhiskerComponent::OnArmorUnequipped(EArmorSlot ArmorSlot) {
}


