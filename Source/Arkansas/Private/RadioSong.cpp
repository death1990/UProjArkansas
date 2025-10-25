#include "RadioSong.h"

FRadioSong::FRadioSong() {
    this->PlayIndex = 0;
    this->AudioEvent = NULL;
    this->FinishedAudioEvent = NULL;
    this->Duration = 0.00f;
}

