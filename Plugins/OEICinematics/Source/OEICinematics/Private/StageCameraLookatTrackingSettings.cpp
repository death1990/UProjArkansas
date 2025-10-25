#include "StageCameraLookatTrackingSettings.h"

FStageCameraLookatTrackingSettings::FStageCameraLookatTrackingSettings() {
    this->bEnableForLookAtSocket = false;
    this->bEnable = false;
    this->bTrackSpeaker = false;
    this->bDrawDebugLookAtTrackingPosition = false;
    this->LookAtTrackingInterpSpeed = 0.00f;
    this->bSetManualFocusDistance = false;
    this->bAllowRoll = false;
    this->bEnableAttachToActor = false;
    this->bEnableLookAtTracking = false;
}

