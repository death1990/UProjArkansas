#include "IndianaAiCharacterAudioComponent.h"

UIndianaAiCharacterAudioComponent::UIndianaAiCharacterAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthRtpc = NULL;
    this->AnimRtpc = NULL;
    this->IdleMovementSwitchValue = NULL;
    this->WalkingMovementSwitchValue = NULL;
    this->RunningMovementSwitchValue = NULL;
    this->SprintingMovementSwitchValue = NULL;
    this->InCombatSwitchValue = NULL;
    this->OutOfCombatSwitchValue = NULL;
    this->DeathRattleAkAudioEvent = NULL;
    this->BreathStartAkAudioEvent = NULL;
    this->BreathStopAkAudioEvent = NULL;
    this->AnimationAudioCurveName = TEXT("AnimationAudioCurve");
}

void UIndianaAiCharacterAudioComponent::OnCharacterStasis(AActor* Actor, bool bIsInStasis, bool bTemporaryStasis) {
}


