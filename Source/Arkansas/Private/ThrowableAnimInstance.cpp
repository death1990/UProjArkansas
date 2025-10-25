#include "ThrowableAnimInstance.h"

UThrowableAnimInstance::UThrowableAnimInstance() {
    this->bThrowStateMachineInProgress = false;
    this->bThrowLoopAnimationRequested = false;
    this->bThrowCancelRequested = false;
    this->CurrentThrowable = NULL;
    this->QueuedThrowable = NULL;
    this->Player = NULL;
    this->OwningCharacterAnimInstance = NULL;
}

void UThrowableAnimInstance::OnThrowingAnimationEnded(UThrowable* Throwable) {
}

void UThrowableAnimInstance::OnInputReleased() {
}

bool UThrowableAnimInstance::IsThrowableTag(FGameplayTag ThrowableTag) const {
    return false;
}

bool UThrowableAnimInstance::IsThrowableMine() const {
    return false;
}

bool UThrowableAnimInstance::IsPlayerMoving() const {
    return false;
}

bool UThrowableAnimInstance::IsPlayerCrouching() const {
    return false;
}

UThrowable* UThrowableAnimInstance::GetCurrentThrowable() const {
    return NULL;
}

void UThrowableAnimInstance::AnimNotify_OnThrowStateMachineComplete() {
}

void UThrowableAnimInstance::AnimNotify_OnThrowStateEntered() {
}

void UThrowableAnimInstance::AnimNotify_OnThrowLoopStartStateEntered() {
}


