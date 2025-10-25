#include "VolumetricAudioEntry.h"

FVolumetricAudioEntry::FVolumetricAudioEntry() {
    this->State = EOEIVolumetricEmitterState::Idle;
    this->FailType = EOEIRetriggerFailType::InvalidConfiguration;
    this->bShowAttenuationPreviewEvent = false;
    this->RetriggerDataConfig = NULL;
    this->LastTimeAttempted = 0.00f;
    this->NextEvaluationTime = 0.00f;
    this->bSelectEmitter = false;
    this->bLatchPositionBoxToVolume = false;
    this->bSnapPositionBoxToVolume = false;
}

