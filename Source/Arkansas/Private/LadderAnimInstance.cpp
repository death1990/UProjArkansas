#include "LadderAnimInstance.h"

ULadderAnimInstance::ULadderAnimInstance() {
    this->LadderAnimationData = NULL;
    this->Player = NULL;
    this->CurrentAnimationSet = NULL;
}

void ULadderAnimInstance::OnPlayerPerspectiveChanged(bool bIsInThirdPerson) {
}

UAnimSequence* ULadderAnimInstance::GetSlideStopSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetSlideStartRightSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetSlideStartLeftSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetSlideIdleSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetSlideExitSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetRightStopSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetRightIdleSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetLeftStopSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetLeftIdleSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetIdleSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetClimbRightToLeftSprintSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetClimbRightToLeftSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetClimbLeftToRightSprintSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetClimbLeftToRightSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetBottomRightExitSequence() const {
    return NULL;
}

UAnimSequence* ULadderAnimInstance::GetBottomLeftExitSequence() const {
    return NULL;
}

void ULadderAnimInstance::AnimNotify_OnLadderStartExit() {
}

void ULadderAnimInstance::AnimNotify_OnLadderExitAnimEnded() {
}

void ULadderAnimInstance::AnimNotify_ClimbRightToLeftAnimStarted() {
}

void ULadderAnimInstance::AnimNotify_ClimbLeftToRightAnimStarted() {
}

void ULadderAnimInstance::AnimNotify_ClimbAnimEnded() {
}


