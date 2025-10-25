#include "OwAnimInstance.h"

UOwAnimInstance::UOwAnimInstance() {
    this->bSpeedIsRun = false;
    this->IKLeftHandAlpha = 1.00f;
    this->IKRightHandAlpha = 1.00f;
    this->AltHandIKLeftAlpha = 0.00f;
    this->AltHandIKRightAlpha = 0.00f;
    this->IKBlendTime = 6.00f;
    this->UnscaledIKLeftHandAlpha = 1.00f;
    this->UnscaledIKRightHandAlpha = 1.00f;
    this->CurrentIKStrength = 0.00f;
    this->DisableIKBlendTime = 10.00f;
    this->FootDownDistance = -1.00f;
    this->FootUpDistance = -1.00f;
    this->bFootIKEnabled = false;
    this->bFootIKState = true;
    this->IKInterpSpeed = 4.00f;
    this->LegIKStrength = 1.00f;
    this->TimeToLookAheadForLeansForWalk = 0.10f;
    this->TimeToLookAheadForLeansForRun = 0.50f;
    this->LeanScaling = 1.50f;
    this->DefaultLocomotionData = NULL;
    this->DefaultCombatLocomotionAnimData = NULL;
    this->bCanBlendLocomotionStates = true;
    this->CombatLocomotionAnimData = NULL;
    this->NonCombatLocomotionAnimData = NULL;
    this->LocomotionController = NULL;
    this->bIsLocomotionActive = false;
    this->SlopeAdditiveAlpha = 0.00f;
    this->SlopeAdditiveAlphaInterpSpeed = 6.00f;
}

float UOwAnimInstance::Montage_SkipToEnd(UAnimMontage* MontageToPlay) {
    return 0.0f;
}

bool UOwAnimInstance::IsAnyRootMotionMontagePlaying() const {
    return false;
}

void UOwAnimInstance::AnimNotify_ToggleFootIK() {
}

void UOwAnimInstance::AnimNotify_EnableFootIK() {
}

void UOwAnimInstance::AnimNotify_DisableFootIK() {
}


