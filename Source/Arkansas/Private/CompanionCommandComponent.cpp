#include "CompanionCommandComponent.h"

UCompanionCommandComponent::UCompanionCommandComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CalledShotTargetDegrees = 10.80f;
    this->TargetRange = 4000.00f;
    this->bRequireTargetUsePlayerTargetingBox = true;
    this->TimeDilation = 0.05f;
    this->CalledShotAvailableReminderFrequency = 120.00f;
    this->MoveToMaxRange = 3000.00f;
    this->MoveToQueryImpactRayPullback = 5.00f;
    this->MoveToQueryProjectionRange = 350.00f;
}

void UCompanionCommandComponent::SetCooldownPercent(ECompanionCommand Command, int32 CompanionIndex, float CooldownPercent) {
}

FVector UCompanionCommandComponent::PerformMoveToQuery(const FVector& TargetLocation, const FMoveToQueryInfo& MoveToQuery) {
    return FVector{};
}

void UCompanionCommandComponent::OnCompanionRegistrationUnlocked(ESpecialObsidianID SpecialObsidianID) {
}

void UCompanionCommandComponent::OnCombatStateChange(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring) {
}

void UCompanionCommandComponent::CompanionCommandMoveTo() {
}

void UCompanionCommandComponent::CompanionCommandInfinite() {
}

FCompanionCommandMoveToLocation UCompanionCommandComponent::CalculateMoveToLocation() {
    return FCompanionCommandMoveToLocation{};
}


