#include "RadioStationVolume.h"

ARadioStationVolume::ARadioStationVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bIsBuffer = false;
}


