#include "OEIMusicManager.h"

UOEIMusicManager::UOEIMusicManager() {
    this->bShouldCreateSubsystem = true;
    this->bDynamicMusicEnabled = false;
    this->MusicSettings = NULL;
    this->AreaMusicData = NULL;
    this->CurrentOverrideState = NULL;
    this->CachedThreatState = NULL;
    this->CachedTimeOfDayState = NULL;
}

void UOEIMusicManager::ResumeMusicStateProcessing() {
}

void UOEIMusicManager::PauseMusicStateProcessing() {
}

void UOEIMusicManager::EnableDynamicMusic_BP(UOEIAreaMusicData* MusicData) {
}

void UOEIMusicManager::DisableDynamicMusic_BP() {
}


