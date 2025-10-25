#include "StealthComponent.h"
#include "Templates/SubclassOf.h"

UStealthComponent::UStealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickpocketClearTime = 1.00f;
}

void UStealthComponent::OnTerminalHackStarted(AActor* Terminal) {
}

void UStealthComponent::OnStopStealth(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled) {
}

void UStealthComponent::OnStartStealth(UIndianaCharMovementComponent* InMovementComponent, bool bPlayerToggled) {
}

void UStealthComponent::OnRestrictedAreaExited(const ARestrictedArea* RestrictedArea) {
}

void UStealthComponent::OnRestrictedAreaEntered(const ARestrictedArea* RestrictedArea) {
}

void UStealthComponent::OnPlayerCombatStateChange(AIndianaCharacter* InCharacter, bool bInCombat, bool bRestoring) {
}

void UStealthComponent::OnLockpickStarted(AActor* Target) {
}

void UStealthComponent::OnCompanionCommandSuccess(ECompanionCommand CompanionCommand, int32 CompanionIndex) {
}

void UStealthComponent::OnBumped(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UStealthComponent::K2_WasCrimeWitnessedByGuard(const FGuid& CrimeID) const {
    return false;
}

bool UStealthComponent::K2_GetCrimeWitnesses(const FGuid& CrimeID, TArray<AIndianaAiCharacter*>& OutAiWitnesses, TArray<AOwCrowdActor*>& OutCrowdWitnesses) const {
    return false;
}

bool UStealthComponent::K2_GetCrimeVictimFaction(const FGuid& CrimeID, TSubclassOf<UFactionData>& OutVictimFaction) const {
    return false;
}

bool UStealthComponent::K2_GetCrimeType(const FGuid& CrimeID, ECrimeType& OutCrimeType) const {
    return false;
}


