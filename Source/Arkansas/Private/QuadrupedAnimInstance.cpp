#include "QuadrupedAnimInstance.h"

UQuadrupedAnimInstance::UQuadrupedAnimInstance() {
    this->CombatWalkPlayRate = 1.00f;
    this->CombatRunPlayRate = 1.00f;
    this->CombatWalkSpeedAuthored = 144.00f;
    this->CombatRunSpeedAuthored = 240.00f;
    this->ForwardBlendMin = -90.00f;
    this->ForwardBlendMax = 90.00f;
    this->BackwardBlendMin = 80.00f;
    this->BackwardBlendMax = 280.00f;
    this->BackwardAngle = 0.00f;
    this->CombatDirection = 0.00f;
    this->bLocoForwardActive = true;
    this->bLocoBackwardActive = false;
}


