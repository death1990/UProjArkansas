#include "DebugCharacterLoader.h"

UDebugCharacterLoader::UDebugCharacterLoader() {
    this->bShouldPauseGame = false;
    this->LoadoutLibrary = NULL;
    this->MaxUsersPerColumn = 10;
    this->MainCanvasPanel = NULL;
    this->CategoryHBox = NULL;
    this->NonZeroSkillsLabel = NULL;
    this->ExistingPerksLabel = NULL;
    this->ExistingInventoryLabel = NULL;
    this->LoadoutBeingApplied = NULL;
}

void UDebugCharacterLoader::OnUserNamesButtonClicked() {
}

void UDebugCharacterLoader::OnUserNameButtonClicked(const FString& UserName) {
}

void UDebugCharacterLoader::OnToggleNonZeroSkills() {
}

void UDebugCharacterLoader::OnToggleExistingPerks() {
}

void UDebugCharacterLoader::OnToggleExistingInventory() {
}

void UDebugCharacterLoader::OnStateButtonClicked(TSoftObjectPtr<UDebugCharacterStateAsset> StateAsset) {
}

void UDebugCharacterLoader::OnMyLoadoutsButtonClicked() {
}

void UDebugCharacterLoader::OnLoadoutButtonClicked(TSoftClassPtr<UDebugCharacterLoadout> Loadout) {
}

void UDebugCharacterLoader::OnLeaveButtonClicked() {
}

void UDebugCharacterLoader::OnDefaultSettingClicked() {
}

void UDebugCharacterLoader::OnCategoryButtonClicked(UButtonBase* Button) {
}


