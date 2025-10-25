#include "TutorialManager.h"

UTutorialManager::UTutorialManager() {
    this->TutorialLogDuration = 7.00f;
}

void UTutorialManager::ShowTutorialMessage(const FGameplayTag& TutorialTag, bool bShowOncePerSession, bool bInfiniteDuration) {
}

void UTutorialManager::PlayerTargetChange(const bool bAdded) {
}

void UTutorialManager::PlayerTakeDamage(const FCauseDamageInfo& CauseDamageInfo) {
}

void UTutorialManager::PlayerSkillUpdated(UCharacterInfoComponent* InCharacterInfoComponent, ESkill Skill, int32 NewValue) {
}

void UTutorialManager::PlayerSkillCheckSuccess(EXPGainReason Reason, int32 XPEarned, ESkill SkillUsed) {
}

void UTutorialManager::PlayerMedKitUsed() {
}

void UTutorialManager::PlayerLevelChanged(int32 NewLevel) {
}

void UTutorialManager::PlayerLanded(UIndianaCharMovementComponent* InMovementComponent, float DistanceFell) {
}

void UTutorialManager::PlayerKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo) {
}

void UTutorialManager::PlayerItemAdded(UInventoryComponent* InventoryComponent, const FItemStack& Item) {
}

void UTutorialManager::PlayerHealthChanged(UHealthComponent* InHealthComponent, float PrevNormalizedHealth, float CurrNormalizedHealth, AActor* Instigator) {
}

void UTutorialManager::PlayerFinishedEquipping(UEquipmentComponent* InEquipmentComponent, UWeapon* Weapon) {
}

void UTutorialManager::PlayerEnteredRestrictedArea(const ARestrictedArea* RestrictedArea) {
}

void UTutorialManager::PlayerEncumberedChanged(bool bEncumbered) {
}

void UTutorialManager::PlayerCompanionKilled(AActor* Companion) {
}

void UTutorialManager::PlayerCompanionAdded(AIndianaAiCharacter* NPC, bool bRegister) {
}

void UTutorialManager::PlayerCombatStateChanged(AIndianaCharacter* InCharacter, bool bIsInCombat, bool bRestoring) {
}

void UTutorialManager::PlayerCausedDamage(const FCauseDamageInfo& CauseDamageInfo) {
}

void UTutorialManager::MarkTutorialComplete(const FGameplayTag& TutorialTag) {
}

bool UTutorialManager::IsTutorialCompleted(const FGameplayTag& TutorialTag) {
    return false;
}

void UTutorialManager::HideTutorialMessage(const FGameplayTag& TutorialTag) {
}

void UTutorialManager::HideIncompleteTutorial(const FGameplayTag& TutorialTag) {
}


