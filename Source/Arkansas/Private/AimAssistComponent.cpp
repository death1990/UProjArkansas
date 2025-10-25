#include "AimAssistComponent.h"

UAimAssistComponent::UAimAssistComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAimAssistEnabled = true;
    this->bFrictionEnabled = true;
    this->bTargetStrafeLockEnabled = true;
    this->bBulletMagnetismEnabled = true;
    this->bBulletMagnetIgnoreSpread = true;
    this->bTrackQuickTargetEnabled = true;
    this->TrackForcedTargetDivisor = 0.10f;
    this->FrictionInTime = 0.10f;
    this->FrictionOutTime = 0.10f;
}

void UAimAssistComponent::ToggleTrackQuickTarget() {
}

void UAimAssistComponent::ToggleTargetStrafeLock() {
}

void UAimAssistComponent::ToggleFriction() {
}

void UAimAssistComponent::ToggleBulletMagnetism() {
}

void UAimAssistComponent::ToggleAimAssist() {
}

void UAimAssistComponent::OnMagnetismStrengthChanged(float StrengthIn) {
}

void UAimAssistComponent::OnDifficultyChanged(EGameDifficulty NewDifficulty) {
}

void UAimAssistComponent::OnAimSnappingStrengthChanged(float StrengthIn) {
}

void UAimAssistComponent::OnAimAssistEnabledChanged(bool bIsEnabled) {
}

void UAimAssistComponent::OnAdhesionOrFrictionStrengthChanged(float NewStrength) {
}

void UAimAssistComponent::EquippedWeaponChanged(UWeapon* NewlyEquippedWeapon) {
}

void UAimAssistComponent::EnableAimAssist(bool Enabled) {
}

void UAimAssistComponent::AimAssistVisualSpread(bool bEnable) {
}

void UAimAssistComponent::AimAssistVisualSnappingCone(bool bEnable) {
}

void UAimAssistComponent::AimAssistVisualCone(bool bEnable) {
}


