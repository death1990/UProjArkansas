#include "AISoundDetectionSettings.h"

FAISoundDetectionSettings::FAISoundDetectionSettings() {
    this->DetectedAlertState = EAlertState::Unaware;
    this->MaxAlertState = EAlertState::Unaware;
    this->bMaxAlertState = false;
    this->DetectedAwarenessChange = 0.00f;
    this->bContinuousAwareness = false;
    this->AwarenessChangeStat = NULL;
    this->bMatchFriendAwareness = false;
    this->PathDistanceCheckScalar = 0.00f;
    this->bExternalStimulusLocation = false;
    this->bShoutTargetLocationAsExternalStimulusLocation = false;
    this->StimulusType = EStimulusType::None;
    this->bExternal = false;
    this->bDangerous = false;
    this->bForceHostilePlayerRelationship = false;
}

