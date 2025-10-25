#include "IndianaAkAmbientVolume.h"

AIndianaAkAmbientVolume::AIndianaAkAmbientVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bOpenSpace = false;
    this->EnterAkData = NULL;
    this->ExitAkData = NULL;
    this->bUsePriority = false;
    this->Priority = 0;
    this->FadeOutTime = 0.00f;
    this->FadeInTime = 0.00f;
    this->bAddedStateData = false;
}


