#include "RootMotionSource_MoveInterpToForce.h"

FRootMotionSource_MoveInterpToForce::FRootMotionSource_MoveInterpToForce() {
    this->InterpolationType = EInterpolationType::Linear;
    this->InterpExp = 0.00f;
    this->InterpSteps = 0;
}

