#include "RadioManager.h"

URadioManager::URadioManager() {
    this->ConversationFailureRetryTime = 15.00f;
    this->RTPCStaticFrequency = 0.00f;
    this->InCombatVoiceOverVolume = 0.25f;
    this->InConversationVoiceOverVolume = 0.15f;
    this->DefaultVoiceOverVolume = 1.00f;
    this->InCombatMusicVolume = 50.00f;
    this->InConversationMusicVolume = 25.00f;
    this->DefaultMusicVolume = 100.00f;
    this->InCombatTransitionTime = 0.50f;
    this->InConversationTransitionTime = 0.50f;
    this->RestorationTransitionTime = 1.00f;
    this->PauseEvent = NULL;
    this->ResumeEvent = NULL;
}

void URadioManager::SongFinishedPlaying(const URadioStationDataAsset* Station) {
}

void URadioManager::OnPreMapLoad(const FString& MapName) {
}

void URadioManager::OnPostMapLoad(UWorld* World) {
}

void URadioManager::OnLoadComplete(const FString& Filename, ELoadGameResult Result) {
}

URadioStationDataAsset* URadioManager::GetStationAsset(const FGameplayTag& StationTag) const {
    return NULL;
}

TArray<ARadioPlayer*> URadioManager::GetRadiosForStationWithTag(const FGameplayTag& StationTag) {
    return TArray<ARadioPlayer*>();
}

TArray<ARadioPlayer*> URadioManager::GetRadiosForStation(const URadioStationDataAsset* StationAsset) {
    return TArray<ARadioPlayer*>();
}

URadioManager* URadioManager::GetRadioManagerBP() {
    return NULL;
}

bool URadioManager::CanPlayerTuneToStationTag(FGameplayTag StationTag) const {
    return false;
}

bool URadioManager::CanPlayerTuneToStation(TSoftObjectPtr<URadioStationDataAsset> StationAsset) const {
    return false;
}


