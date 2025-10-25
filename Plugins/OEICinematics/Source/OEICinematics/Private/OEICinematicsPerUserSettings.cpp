#include "OEICinematicsPerUserSettings.h"

UOEICinematicsPerUserSettings::UOEICinematicsPerUserSettings() {
    this->CinematicTestMode = ECinematicTestMode::TestLevel;
    this->OpenSequencerForObsidianToolsSelection = true;
    this->bEnableVoiceOverEmotionExtension = false;
    this->bAutoUpdateSequencesOnConversationChange = true;
    this->bShowGesturesMissingEmphasisPointsInGestureLibrary = false;
}


