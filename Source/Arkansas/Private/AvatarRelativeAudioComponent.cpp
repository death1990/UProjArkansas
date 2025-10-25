#include "AvatarRelativeAudioComponent.h"

UAvatarRelativeAudioComponent::UAvatarRelativeAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DistanceToAvatarRTPC = NULL;
    this->DefaultDistanceToAvatarValue = 5000.00f;
    this->Player = NULL;
    this->Emitter = NULL;
}

void UAvatarRelativeAudioComponent::OnPlayerPerspectiveChanged(bool bInThirdPersonPerspective) {
}

void UAvatarRelativeAudioComponent::OnEmitterVirtualized() {
}

void UAvatarRelativeAudioComponent::OnEmitterPhysicalized() {
}


