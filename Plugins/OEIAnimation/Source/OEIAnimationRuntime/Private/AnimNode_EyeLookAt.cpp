#include "AnimNode_EyeLookAt.h"

FAnimNode_EyeLookAt::FAnimNode_EyeLookAt() {
    this->LookAtAxis = EAxisOption::X;
    this->bUseLookUpAxis = false;
    this->LookUpAxis = EAxisOption::X;
    this->LookAtClampUp = 0.00f;
    this->LookAtClampRight = 0.00f;
    this->InterpolationTime = 0.00f;
    this->InterpolationTimeNear = 0.00f;
    this->LookAtLocationNearAngleThreshold = 0.00f;
    this->bEnableDebug = false;
    this->bClearRotationFirst = false;
}

