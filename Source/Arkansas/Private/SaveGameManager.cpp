#include "SaveGameManager.h"

USaveGameManager::USaveGameManager() {
    this->ScreenshotWaitTimeLimitSeconds = 30.00f;
    this->ChunkInstallDialog = NULL;
    this->AutosaveIconFilePath = TEXT("UI/Saving/AutosaveIcons/AutosaveIcon_228x128.png");
    this->MaxOverwriteableSaveCount = 100;
    this->ActiveStorageProviderType = ESaveGameStorageProviderType::Invalid;
    this->StorageProviders[0] = NULL;
    this->StorageProviders[1] = NULL;
    this->StorageProviders[2] = NULL;
    this->StorageProviders[3] = NULL;
}

void USaveGameManager::SaveUserGameSettings(bool bSettingsPotentiallyChanged) {
}

ESaveGameResult USaveGameManager::SaveGame(const FString& Filename, bool bIgnoreSuperNova, ESaveGameType SaveGameType) {
    return ESaveGameResult::Success;
}

void USaveGameManager::RequestPostGameSave() {
}

void USaveGameManager::RequestPointOfNoReturnSave() {
}

void USaveGameManager::RequestBeforeSkipSave() {
}

void USaveGameManager::RequestBeforeEVTransitionSave() {
}

void USaveGameManager::RequestAutosave(bool bAllowOnSuperNova) {
}

ESaveGameResult USaveGameManager::Quicksave() {
    return ESaveGameResult::Success;
}

ELoadGameResult USaveGameManager::Quickload() {
    return ELoadGameResult::Success;
}

void USaveGameManager::PointOfNoReturnSave() {
}

void USaveGameManager::OnPromptedSaveSaveMenuClosed(bool bForced) {
}

void USaveGameManager::OnActorDestroyed(AActor* Actor) {
}

void USaveGameManager::LoadUserGameSettings(bool bBlocking) {
}

ELoadGameResult USaveGameManager::LoadGame(const FString& Filename, bool bPreValidateMetadata) {
    return ELoadGameResult::Success;
}

void USaveGameManager::DisableSaves(bool bDisable) {
}

EDeleteGameResult USaveGameManager::DeleteGame(const FString& Filename) {
    return EDeleteGameResult::Success;
}

void USaveGameManager::BeforeEVTransitionSave() {
}

bool USaveGameManager::Autosave(EAutoSaveType AutoSaveType, bool bIgnoreSuperNova) {
    return false;
}


