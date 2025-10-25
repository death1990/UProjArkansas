#include "OwMusicManager.h"

UOwMusicManager::UOwMusicManager() {
    this->CurrentMapMusic = NULL;
}

void UOwMusicManager::PostEvent(UAkAudioEvent* AkEvent) {
}

void UOwMusicManager::OnPhaseOfDayChanged(EPhaseOfDay NewPhase) {
}

void UOwMusicManager::OnMusicSyncEntry(const float BarDuration, const float BeatDuration) {
}

void UOwMusicManager::OnCombatStateChange(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring) {
}

void UOwMusicManager::BP_SetMusicIntensityLimit(bool bCombat, bool bMinimum, float Value) {
}

void UOwMusicManager::BP_SetMusicIntensityLerpTime(bool bCombat, bool bEnter, float LerpTime) {
}

void UOwMusicManager::BP_AddMusicIntensityModifier(bool bCombat, EArithmeticOperation ArithmeticOperation, float Value) {
}


