#include "OEIGestureTrackActorGenerationSettings.h"

FOEIGestureTrackActorGenerationSettings::FOEIGestureTrackActorGenerationSettings() {
    this->GestureDensity = 0.00f;
    this->bGenerateMultipleGestures = false;
    this->MinimumGapToFill = 0.00f;
    this->IntraGestureMargin = 0.00f;
    this->EaseInTime = 0.00f;
    this->EaseOutTime = 0.00f;
    this->EaseInCurve = EMovieSceneBuiltInEasing::Linear;
    this->EaseOutCurve = EMovieSceneBuiltInEasing::Linear;
    this->LineFillWeight = 0.00f;
    this->WordMatchWeight = 0.00f;
    this->bAutomaticallySwitchIdles = false;
    this->IdleSwitchDensity = 0.00f;
}

