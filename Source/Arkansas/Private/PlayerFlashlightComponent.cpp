#include "PlayerFlashlightComponent.h"

UPlayerFlashlightComponent::UPlayerFlashlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->P3PFlashlightClass = NULL;
    this->P3PFlashlight = NULL;
}

void UPlayerFlashlightComponent::ToggleFlashlight() {
}

void UPlayerFlashlightComponent::SetFlashlightState(bool bIsOn) {
}

void UPlayerFlashlightComponent::OnPlayerPerspectiveChanged(bool bInThirdPersonPerspective) {
}

void UPlayerFlashlightComponent::OnPlayerItemEquipped(UItem* Item) {
}

void UPlayerFlashlightComponent::OnPlayerConversationChange(AActor* Participant, const FGuid& NavigatorID, bool bEntered) {
}

void UPlayerFlashlightComponent::OnArmorUnequipped(EArmorSlot ArmorSlot) {
}


