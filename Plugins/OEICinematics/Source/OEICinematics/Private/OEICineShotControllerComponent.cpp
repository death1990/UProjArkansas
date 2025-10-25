#include "OEICineShotControllerComponent.h"

UOEICineShotControllerComponent::UOEICineShotControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseLocalAlphaControl = true;
    this->TransitionInTime = 1.00f;
    this->TransitionOutTime = 1.00f;
    this->TransitionExponent = 1.00f;
    this->bRemoveOnTransitionOut = true;
    this->HandoffMode = EOEIShotHandoffMode::Unspecified;
    this->ShotInterpolator = NULL;
    this->CachedPlayerPawn = NULL;
}

void UOEICineShotControllerComponent::TransitionOut() {
}

void UOEICineShotControllerComponent::TransitionIn(APawn* Player) {
}

bool UOEICineShotControllerComponent::ShouldRemove() const {
    return false;
}


