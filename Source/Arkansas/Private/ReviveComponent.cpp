#include "ReviveComponent.h"

UReviveComponent::UReviveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RevivingCompanionSpell = NULL;
    this->RevivingPlayerSpell = NULL;
    this->PlayerReviveAnimation = NULL;
    this->PlayerReviveCrouchedAnimation = NULL;
    this->PlayerReviveFallingAnimation = NULL;
    this->PlayerReviveAnimationP3P = NULL;
    this->PlayerReviveCrouchedAnimationP3P = NULL;
    this->PlayerReviveFallingAnimationP3P = NULL;
    this->MaximumCompanionChatterDistance = 10000.00f;
}

void UReviveComponent::StartRevivalOfPlayer(AIndianaAiCharacter* Interactor) {
}

void UReviveComponent::PreStartRevivalOfPlayer(AIndianaAiCharacter* Interactor) {
}

bool UReviveComponent::IsPlayerRevivingCompanion() const {
    return false;
}

bool UReviveComponent::IsCompanionRevivingPlayer() const {
    return false;
}

void UReviveComponent::EndSelfRevivalOfPlayer(UAnimMontage* Montage, bool bInterrupted) {
}


