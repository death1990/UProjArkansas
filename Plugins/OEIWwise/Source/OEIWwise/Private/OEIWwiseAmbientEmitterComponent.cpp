#include "OEIWwiseAmbientEmitterComponent.h"

UOEIWwiseAmbientEmitterComponent::UOEIWwiseAmbientEmitterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmbientAudioEvents.AddDefaulted(1);
    this->AkAudioEvent = NULL;
    this->bAutoPost = true;
    this->MaxAttenuationRadius = 0.00f;
}

void UOEIWwiseAmbientEmitterComponent::StopAmbientSound() {
}

void UOEIWwiseAmbientEmitterComponent::StartAmbientSound() {
}

void UOEIWwiseAmbientEmitterComponent::PostWwiseEvent(UAkAudioEvent* WwiseEvent) {
}

bool UOEIWwiseAmbientEmitterComponent::IsCurrentlyPlaying() {
    return false;
}

void UOEIWwiseAmbientEmitterComponent::AddAmbientSound(UAkAudioEvent* AudioEvent) {
}


