#include "OEIVoiceOverSettings.h"

UOEIVoiceOverSettings::UOEIVoiceOverSettings() {
    this->StopFadeOutTime = 0.01f;
    this->StreamingPriority = 100;
    this->CurvesToZero.AddDefaulted(250);
    this->AudioImplementation = EVoiceOverAudioImplementationType::CurveTables;
}


