#include "ActorAkHint.h"

FActorAkHint::FActorAkHint() {
    this->Actor = NULL;
    this->bUseAllAudioComponents = false;
    this->bVoiceOverComponentHint = false;
    this->bMuteOutputBus = false;
    this->AuxSendVolume = 0.00f;
}

