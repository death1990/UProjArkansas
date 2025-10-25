#include "OwMusicVolume.h"

AOwMusicVolume::AOwMusicVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bConsideredDangerousArea = false;
    this->OutOfCombatMinIntensity = 0.00f;
    this->OutOfCombatMaxIntensity = 0.00f;
    this->InCombatMinIntensity = 0.00f;
    this->InCombatMaxIntensity = 0.00f;
    this->GlobalAudioActor = NULL;
    this->ModifierDelayTime = 0.00f;
    this->InCombatEnterLerpTime = 0.00f;
    this->InCombatExitLerpTime = 0.00f;
    this->OutOfCombatEnterLerpTime = 0.00f;
    this->OutOfCombatExitLerpTime = 0.00f;
}

void AOwMusicVolume::SetActive_BP(bool bNewActive) {
}

void AOwMusicVolume::OnExitVolume(AActor* OverlappedActor, AActor* OtherActor) {
}

void AOwMusicVolume::OnEnterVolume(AActor* OverlappedActor, AActor* OtherActor) {
}


