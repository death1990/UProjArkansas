#include "SpeakerCustomCameraData.h"

FSpeakerCustomCameraData::FSpeakerCustomCameraData() {
    this->bUseAsTrackingTarget = false;
    this->TrackingType = ECustomSpeakerCameraTrackingTargetType::WhenSpeakingToPlayer;
    this->bDisableCameraShake = false;
}

