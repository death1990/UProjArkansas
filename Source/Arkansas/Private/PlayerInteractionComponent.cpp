#include "PlayerInteractionComponent.h"

UPlayerInteractionComponent::UPlayerInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SweptInteractionTraceRadius = 3.00f;
    this->SweptInteractionTraceRadius3P = 40.00f;
    this->ProximityHighlightRange = 200.00f;
    this->DirectHighlightRange = 1000.00f;
    this->CompanionInteractRange = 2000.00f;
    this->DefaultHoldInteractionTime = 1.00f;
    this->ControllerInteractionDelayTime = 0.20f;
    this->SecondaryInteractionDelayTime = 0.50f;
    this->BodyTraceRange = 100.00f;
}

void UPlayerInteractionComponent::OnHUDVisibilityChanged(bool bVisible) {
}

void UPlayerInteractionComponent::OnHighlightModeChanged(bool bVisible) {
}

void UPlayerInteractionComponent::DrawInteractionCylinder(float PersistentTime) {
}


