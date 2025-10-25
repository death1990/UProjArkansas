#include "PropCurveData.h"

FPropCurveData::FPropCurveData() {
    this->bManuallyEditedCurves = false;
    this->TranslationCurve = NULL;
    this->RotationCurve = NULL;
    this->PropMontage = NULL;
    this->MinAnimTime = 0.00f;
    this->MaxAnimTime = 0.00f;
}

