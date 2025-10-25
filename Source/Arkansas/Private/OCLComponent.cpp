#include "OCLComponent.h"

UOCLComponent::UOCLComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialState = EOCLState::Closed;
    this->KeyItem = NULL;
    this->RemoveKeyAfterUse = false;
    this->bCanLockpick = true;
    this->LockpickDifficulty = EOCLDifficulty::Medium;
    this->bForceLockpickTier = false;
    this->ForcedLockpickTier = ESkillDifficultyTier::One;
    this->LockpickItem = NULL;
    this->AutoCloseDelay = 5.00f;
    this->AutoCloseDelayNPC = 5.00f;
    this->AutoCloseRadius = 1000.00f;
    this->bIgnoreForCrime = false;
    this->CurrentState = EOCLState::Closed;
}

void UOCLComponent::UnsealOCL(bool bFireOCLUnsealedEvent) {
}

void UOCLComponent::UnlockOCL(bool bFireOCLUnlockedEvent) {
}

void UOCLComponent::UnjamOCL(bool bFireOCLJammedEvent) {
}

void UOCLComponent::UnbarOCL(bool bFireOCLUnbarredEvent, bool bEnterLockedState) {
}

void UOCLComponent::SignalOCLAnimationComplete() {
}

void UOCLComponent::SealOCL(bool bFireOCLSealedEvent) {
}

void UOCLComponent::OnAnimNotifyEvent(EAnimNotify AnimNotifyEvent, FName OptionalSocket) {
}

void UOCLComponent::LockOCL(bool bFireOCLLockedEvent) {
}

void UOCLComponent::JamOCL(bool bFireOCLJammedEvent) {
}

bool UOCLComponent::IsSealing() const {
    return false;
}

bool UOCLComponent::IsSealed() const {
    return false;
}

bool UOCLComponent::IsOpening() const {
    return false;
}

bool UOCLComponent::IsOpen() const {
    return false;
}

bool UOCLComponent::IsLocked() const {
    return false;
}

bool UOCLComponent::IsJammed() const {
    return false;
}

bool UOCLComponent::IsClosing() const {
    return false;
}

bool UOCLComponent::IsClosed() const {
    return false;
}

bool UOCLComponent::IsBarred() const {
    return false;
}

bool UOCLComponent::IsActorInFrontOfOCL(AActor* Actor) {
    return false;
}

bool UOCLComponent::HasWirePower() {
    return false;
}

uint8 UOCLComponent::GetExactUnjamDifficulty() const {
    return 0;
}

uint8 UOCLComponent::GetExactLockpickDifficulty() const {
    return 0;
}

EOCLState UOCLComponent::GetCurrentState() const {
    return EOCLState::Closed;
}

void UOCLComponent::BarOCL(bool bFireOCLBarredEvent) {
}

EOCLResult UOCLComponent::AttemptUnlock(AActor* Initiator) {
    return EOCLResult::Success;
}

EOCLResult UOCLComponent::AttemptUnjam(AActor* Initiator) {
    return EOCLResult::Success;
}

EOCLResult UOCLComponent::AttemptOpen(AActor* Initiator, bool bForce, bool bSeal, bool bIgnoreLockStatus, bool bIgnoreStartEvent, bool bIgnoreEndEvent, bool bIgnoreSound, bool bInstantAnimation) {
    return EOCLResult::Success;
}

EOCLResult UOCLComponent::AttemptClose(AActor* Initiator, bool bForce, bool Block, bool bSeal, bool bIgnoreLockStatus, bool bIgnoreStartEvent, bool bIgnoreEndEvent, bool bIgnoreSound, bool bInstantAnimation) {
    return EOCLResult::Success;
}


