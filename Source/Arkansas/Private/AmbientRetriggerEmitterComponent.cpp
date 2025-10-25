#include "AmbientRetriggerEmitterComponent.h"

UAmbientRetriggerEmitterComponent::UAmbientRetriggerEmitterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmbientAudioEvents.AddDefaulted(1);
    this->DelayMin = 0.50f;
    this->DelayMax = 3.00f;
    this->bHandleLifetimeAutomatically = true;
}

void UAmbientRetriggerEmitterComponent::EmitterVirtualised() {
}

void UAmbientRetriggerEmitterComponent::EmitterPhysicalised() {
}


