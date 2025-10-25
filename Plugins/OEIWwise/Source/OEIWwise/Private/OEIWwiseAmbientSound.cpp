#include "OEIWwiseAmbientSound.h"
#include "OEIWwiseAmbientEmitterComponent.h"

AOEIWwiseAmbientSound::AOEIWwiseAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UOEIWwiseAmbientEmitterComponent>(TEXT("OEIWwiseEmitterComponent0"));
    this->AkAudioEvent = NULL;
    this->AmbientEmitterComponent = (UOEIWwiseAmbientEmitterComponent*)RootComponent;
    this->EmitterComponent = NULL;
}

void AOEIWwiseAmbientSound::StopAmbientSound() {
}

void AOEIWwiseAmbientSound::StartAmbientSound() {
}

void AOEIWwiseAmbientSound::PostWwiseEvent(UAkAudioEvent* WwiseEvent) {
}


