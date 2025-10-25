#include "AkPlaySoundEventEffect.h"

UAkPlaySoundEventEffect::UAkPlaySoundEventEffect() {
    this->Sound = NULL;
    this->FadeTime = 0.00f;
    this->DelayTime = 0.00f;
    this->SoundLoop = NULL;
    this->LoopFadeTime = 0.00f;
    this->LoopDelayTime = 0.00f;
    this->StopEvent = NULL;
    this->StopDelayTime = 0.00f;
    this->bStopSoundWhenTargetDestroyed = true;
    this->bPostAtLocation = false;
    this->bOverridePostLocation = false;
    this->PlayFxTarget = EPlayFxTarget::Any;
}


