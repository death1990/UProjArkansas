#include "DynamicEmitterVolume.h"

ADynamicEmitterVolume::ADynamicEmitterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAllAudioComponents = false;
    this->bVoiceOverComponentHint = false;
    this->bMuteOutputBus = false;
    this->AuxSendVolume = 1.00f;
}


