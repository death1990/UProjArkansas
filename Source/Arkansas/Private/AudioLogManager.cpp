#include "AudioLogManager.h"

UAudioLogManager::UAudioLogManager() {
    this->PauseEvent = NULL;
    this->ResumeEvent = NULL;
    this->PostCombatTime = 3.00f;
    this->PostConversationTime = 3.00f;
    this->CurrentAudioLogPlayState = EAudioLogPlayState::Stopped;
    this->CurrentPlayingAudioLog = NULL;
}

void UAudioLogManager::StopCurrentAudioLog(bool bForce) {
}

void UAudioLogManager::ResumeCurrentAudioLog(bool bForce, bool bFromPlay) {
}

void UAudioLogManager::PlayAudioLog(const FGuid& AudioLogID) {
}

void UAudioLogManager::PauseCurrentAudioLog(bool bForce, bool bFromStop) {
}

void UAudioLogManager::OnPreMapLoad(const FString& MapName) {
}

void UAudioLogManager::OnPostMapLoad(UWorld* World) {
}

void UAudioLogManager::OnLoadComplete(const FString& Filename, ELoadGameResult Result) {
}

void UAudioLogManager::OnConversationEnded(UOwConversationInstance* ConversationInstance) {
}

bool UAudioLogManager::IsPlayingAudioLog() const {
    return false;
}

EAudioLogPlayState UAudioLogManager::GetCurrentAudioLogPlayState() const {
    return EAudioLogPlayState::Stopped;
}

bool UAudioLogManager::CanStopCurrentAudioLog(bool bExclusive) const {
    return false;
}

bool UAudioLogManager::CanResumeCurrentAudioLog(bool bExclusive) const {
    return false;
}

bool UAudioLogManager::CanPauseCurrentAudioLog(bool bExclusive) const {
    return false;
}


