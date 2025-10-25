#include "AudioOneShotSettings.h"

FAudioOneShotSettings::FAudioOneShotSettings() {
    this->AttenuationRadius = 0.00f;
    this->AudioPool = NULL;
    this->PlayType = EAudioOneShotPlayType::Shell;
    this->TraceFailBehavior = EAudioOneShotTraceFailBehavior::PlayAnyway;
    this->PlaySoundAtEdge = false;
    this->ZOffset = 0.00f;
}

