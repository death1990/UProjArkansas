#include "MedKitComponent.h"

UMedKitComponent::UMedKitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilityIcon = NULL;
    this->TriggerSound = NULL;
    this->SingleDoseMontage = NULL;
    this->SingleDoseMontageP1P = NULL;
    this->DoubleDoseMontage = NULL;
    this->DoubleDoseMontageP1P = NULL;
    this->PercentToHealCompanions = 0.30f;
    this->ToxicityDepletionDelayInCombat = 0.00f;
    this->ToxicityDepletionDelayOutOfCombat = 0.00f;
    this->CrashSpell = NULL;
    this->ToxicityCrashThreshold = 1.00f;
    this->ToxicityDepletionRateInCombat = 1.00f;
    this->ToxicityDepletionRateOutOfCombat = 1.00f;
    this->CrashDuration = 1.00f;
    this->CrashReactionAudioEvent = NULL;
    this->CrashRecoverAudioEvent = NULL;
    this->InhalerFailedAudioEvent = NULL;
    this->InhalerFailedCrashAudioEvent = NULL;
    this->ConsumeNourishmentAudioEvent = NULL;
}

void UMedKitComponent::TryFullHealWithNourishmentItems() {
}

void UMedKitComponent::StartMedkit(UWeapon* Weapon) {
}

void UMedKitComponent::OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat) {
}

void UMedKitComponent::OnRadChanged(UHealthComponent* HealthComponentIn, float PrevNormalizedRad, float CurrNormalizedRad) {
}

void UMedKitComponent::OnCombatStateChanged(AIndianaCharacter* Character, bool bIsInCombat, bool bRestoring) {
}

void UMedKitComponent::OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent, FName OptionalSocket) {
}

void UMedKitComponent::OnAbilityMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

bool UMedKitComponent::HasNourishmentItem() const {
    return false;
}

float UMedKitComponent::GetCurrentToxicity() const {
    return 0.0f;
}

void UMedKitComponent::ConsumeBestNourishmentItem() {
}

void UMedKitComponent::ClearCrash() {
}

void UMedKitComponent::AddToxicity(float NewToxicity) {
}


