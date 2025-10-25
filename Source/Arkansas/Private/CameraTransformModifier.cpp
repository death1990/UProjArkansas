#include "CameraTransformModifier.h"

FCameraTransformModifier::FCameraTransformModifier() {
    this->bEnabled = false;
    this->Delay = 0.00f;
    this->bPositional = false;
    this->bRotational = false;
    this->PositionalHipFireScalar = 0.00f;
    this->RotationalHipFireScalar = 0.00f;
    this->MotionInCurveType = EInterpolationType::Linear;
    this->MotionInCurveExp = 0.00f;
    this->MotionInInterpSteps = 0;
    this->MotionInScalar = 0.00f;
    this->MotionOutCurveType = EInterpolationType::Linear;
    this->MotionOutCurveExp = 0.00f;
    this->MotionOutInterpSteps = 0;
    this->MotionOutScalar = 0.00f;
    this->DurationIn = 0.00f;
    this->DurationInCurveType = EInterpolationType::Linear;
    this->DurationInCurveExp = 0.00f;
    this->DurationInInterpSteps = 0;
    this->DurationInScalar = 0.00f;
    this->DurationOut = 0.00f;
    this->DurationOutCurveType = EInterpolationType::Linear;
    this->DurationOutCurveExp = 0.00f;
    this->DurationOutInterpSteps = 0;
    this->DurationOutScalar = 0.00f;
    this->bScaleWithShotIndex = false;
    this->ShotsToMaxScale = 0;
    this->MaxShotsScalar = 0.00f;
}

