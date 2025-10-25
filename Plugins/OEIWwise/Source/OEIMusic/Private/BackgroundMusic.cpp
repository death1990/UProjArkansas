#include "BackgroundMusic.h"

FBackgroundMusic::FBackgroundMusic() {
    this->BackgroundMusicState = NULL;
    this->bEnableAmbientStateCycling = false;
    this->bAddThreatResistance = false;
    this->ThreatResistanceScale = 0.00f;
    this->ThreatResistanceDecay = 0.00f;
}

