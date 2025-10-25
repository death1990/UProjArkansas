#include "TPVMinAnimInstance.h"

UTPVMinAnimInstance::UTPVMinAnimInstance() {
    this->MinHeadPitch = -89.00f;
    this->MaxHeadPitch = 89.00f;
    this->MinHeadYaw = -60.00f;
    this->MaxHeadYaw = 60.00f;
    this->bIsRagdolling = false;
    this->bSmoothedDirectionForward = false;
    this->bSpeedIsIdle = true;
    this->bSpeedIsWalk = false;
    this->SmoothedDirectionInterpSpeed = 6.00f;
    this->Direction = 0.00f;
    this->SmoothedDirection = 0.00f;
    this->NonCombatStride = 1.00f;
    this->NonCombatWalkRunPercent = 0.00f;
    this->NonCombatWalkRunPlayRate = 1.00f;
    this->WalkPlayRate = 1.00f;
    this->RunPlayRate = 1.00f;
    this->RunSpeed = 240.00f;
    this->WalkSpeed = 144.00f;
    this->RunSpeedRate = 240.00f;
    this->MinPlayrateSpeed = 0.50f;
    this->MaxPlayrateSpeed = 2.00f;
    this->MinimumHillDetectionDistance = 40.00f;
    this->CurrentHillAngle = 0.00f;
    this->HillAngleBlendSpeed = 8.00f;
    this->WalkStartPlaySpeed = 1.00f;
    this->AimOffsetStrength = 1.00f;
}


