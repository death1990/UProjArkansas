#include "StationMusicData.h"

FStationMusicData::FStationMusicData() {
    this->PlayerStartAudioEvent = NULL;
    this->PlayerStopAudioEvent = NULL;
    this->PlayerMuteAudioEvent = NULL;
    this->PlayerUnmuteAudioEvent = NULL;
    this->WorldStartAudioEvent = NULL;
    this->WorldStopAudioEvent = NULL;
    this->WorldMuteAudioEvent = NULL;
    this->WorldUnmuteAudioEvent = NULL;
    this->Duration = 0.00f;
    this->RadioAudioData = NULL;
}

