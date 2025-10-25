#include "PlayerDeathComponent.h"

UPlayerDeathComponent::UPlayerDeathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeathAudioEvent = NULL;
    this->DownedAudioEvent = NULL;
    this->ReviveAudioEvent = NULL;
    this->DownedListenerPositioningSettings = NULL;
    this->DownedAnimation = NULL;
    this->DownedCrouchingAnimation = NULL;
    this->DownedFallingAnimation = NULL;
    this->PostDownedAnimOffset = 0.30f;
    this->DeathAnimation = NULL;
    this->CrouchingAnimation = NULL;
    this->FallingDeathAnimation = NULL;
    this->DrownedDeathAnimation = NULL;
    this->bFadeCameraIfCrouched = true;
    this->bCrouchedFadeSound = false;
    this->DownedAnimWaitTime = 5.00f;
    this->AnimWaitTime = 2.00f;
    this->FadeToBlackTime = 1.00f;
    this->WaitFadedTime = 0.25f;
    this->MercilessMasterSpell = NULL;
    this->MercilessMasterAudioEvent = NULL;
    this->MercilessMasterStartAudioEvent = NULL;
    this->MercilessMasterCooldownSpell = NULL;
}

void UPlayerDeathComponent::ReviveAnimComplete() {
}

void UPlayerDeathComponent::OnLanded(UIndianaCharMovementComponent* InMovementComponent, float DistanceFallen) {
}

void UPlayerDeathComponent::OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent, FName OptionalSocket) {
}

void UPlayerDeathComponent::FadeToBlackComplete() {
}

void UPlayerDeathComponent::DownedAnimComplete() {
}

void UPlayerDeathComponent::DeathAnimComplete() {
}


