#include "AIChatterComponent.h"

UAIChatterComponent::UAIChatterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AlarmHeardPlayerDistanceThreshold = 2500.00f;
    this->StealthIdleChatterDistance = 1500.00f;
    this->StealthIdleTickInterval = 10.00f;
    this->CombatTauntMinimumTimeInCombat = 15.00f;
    this->CombatTauntTickInterval = 5.00f;
    this->CrimeNonGuardOutlawUpdateChatterDelay = 5.00f;
}

void UAIChatterComponent::TickStealthIdleChatter() {
}

void UAIChatterComponent::TickCrimeChatter(float DeltaTime) {
}

void UAIChatterComponent::TickCombatTauntChatter() {
}

void UAIChatterComponent::OnWeaponStartReload(UWeapon* Weapon) {
}

void UAIChatterComponent::OnThrowableAnimationStarted(const UThrowable* Throwable) {
}

void UAIChatterComponent::OnRevivedPlayer() {
}

void UAIChatterComponent::OnReceivedFriendlyFire(AActor* InAttacker) {
}

void UAIChatterComponent::OnPlayerAtLowHealth() {
}

void UAIChatterComponent::OnKill(AActor* InKiller, AActor* InKilledTarget, const FCauseDamageInfo& DamageInfo) {
}

void UAIChatterComponent::OnHealthChanged(UHealthComponent* InHealthComponent, float PrevNormalizedHealth, float CurrentNormalizedHealth, AActor* Instigator) {
}

void UAIChatterComponent::OnCrimeResponseStop(AIndianaAiController* InController, const FGuid CrimeID) {
}

void UAIChatterComponent::OnCrimeResponseStart(AIndianaAiController* InController, const FGuid CrimeID) {
}

void UAIChatterComponent::OnCompanionCommandFail(ECompanionCommand CompanionCommand, int32 CompanionSlotValue) {
}

void UAIChatterComponent::OnCompanionCommandCooldownEnd(ECompanionCommand Command, int32 CompanionIndex) {
}

void UAIChatterComponent::OnCombatStateChange(AIndianaCharacter* InCharacter, bool bIsInCombat, bool bRestoring) {
}

void UAIChatterComponent::OnAlertStateChange(AActor* TargetActor, EAlertState PreviousAlertState, EAlertState TargetAlertState, bool bRestoring) {
}


