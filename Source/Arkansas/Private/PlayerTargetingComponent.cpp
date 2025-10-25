#include "PlayerTargetingComponent.h"

UPlayerTargetingComponent::UPlayerTargetingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoAimCacheRefreshTime = 0.03f;
    this->ReticleVerticalOffset = 0.00f;
    this->ReticleHorizontalOffset = 0.00f;
    this->WeightStartTime = 0.50f;
    this->WeightEndTimeWithinBoundingBox = 0.50f;
    this->WeightEndTimeOutsideBoundingBox = 0.25f;
    this->AlwaysTrackDistance = 150.00f;
    this->ProjectedTargetingDirEndLocationRefreshTime = 0.25f;
    this->ProjectedTargetingDirEndLocationDistance = 200.00f;
    this->MaximumSungazeAlignmentAngle = 30.00f;
    this->MinimumSungazingPitch = 30.00f;
    this->DistanceForTargetingDelay = 4000.00f;
    this->FocusTimeForTargetingDelay = 2.00f;
}

void UPlayerTargetingComponent::OnCompanionTargetDeath(const FCauseDamageInfo& DamageInfo) {
}

void UPlayerTargetingComponent::OnCombatStateChange(AIndianaCharacter* InCharacter, bool bIsInCombat, bool bRestoring) {
}

void UPlayerTargetingComponent::OnCalenderShiftFromNightToDay() {
}

void UPlayerTargetingComponent::OnCalenderShiftFromDayToNight() {
}

void UPlayerTargetingComponent::KillTarget() {
}

bool UPlayerTargetingComponent::IsSungazing() {
    return false;
}

FVector UPlayerTargetingComponent::GetTargetLocation() const {
    return FVector{};
}

void UPlayerTargetingComponent::DrawPlayerTargetingTrace(float PersistTime) const {
}

void UPlayerTargetingComponent::DebugSetReticleVerticalOffset(float Value) {
}

void UPlayerTargetingComponent::DebugAdjustReticleVerticalOffset(float Adjustment) {
}


