#include "AchievementsManager.h"

UAchievementsManager::UAchievementsManager() {
    this->CurrentPresenceData = NULL;
}

void UAchievementsManager::OnWeaponSlotted(UItem* Item) {
}

void UAchievementsManager::OnKillPreDeath(AActor* Victim) {
}

void UAchievementsManager::OnItemEquipped(UItem* Item) {
}

void UAchievementsManager::IncrementAchievement(const FName& AchievementBPName, int32 Count) {
}

void UAchievementsManager::GameOver_BP() {
}

void UAchievementsManager::GameOver() {
}

void UAchievementsManager::CompleteAchievementBP(const UAchievementDataAsset* Achievement) {
}

void UAchievementsManager::CompleteAchievement(const FName& AchievementBPName) {
}


