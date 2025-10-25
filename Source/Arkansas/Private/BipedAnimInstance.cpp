#include "BipedAnimInstance.h"

UBipedAnimInstance::UBipedAnimInstance() {
    this->EyePoseAsset = NULL;
    this->bIkLeftHand = true;
    this->bDelayedReadyFireRequested = false;
    this->DelayedReadyFireTime = 0.50f;
    this->ArmPoseStrength = 1.00f;
    this->CombatArmPoseStrength = 1.00f;
    this->FootAngledAmountForSlopes = 1.00f;
    this->bUpperBodyIsolated = false;
    this->bUseSearchingLayer = false;
    this->HobbledWalkForwardSpeed = 1.00f;
    this->PersonalityIdleAdditive = NULL;
    this->PersonalityIdleStrength = 0.00f;
    this->TEMP_NonCombatWeaponUpArmPoseSpeed = 6.00f;
    this->TEMP_NonCombatWeaponUpArmPoseStrength = 0.00f;
    this->bUseTalkingAnimations = false;
    this->IKLeftHandStrength = 0.00f;
    this->HandPoseStrength = 0.00f;
    this->bUseWalkArmPose = true;
    this->bBlendArmPose = false;
    this->ArmPoseSpeed = 6.00f;
    this->bCutFromIdleLoop = false;
}

void UBipedAnimInstance::UpdatePersonalityAnims() {
}


