#include "TracerSoundData.h"

UTracerSoundData::UTracerSoundData() {
    this->ProjectileSound = NULL;
    this->ProjectileSoundTTD = NULL;
    this->TooCloseFadeInPercent = 30;
    this->bStopOnImpact = false;
    this->ImpactFadeDuration = 0.00f;
}


