#include "DitherSettings.h"

FDitherSettings::FDitherSettings() {
    this->bUseDynamicGeoDithering = false;
    this->CameraIgnoreDistance = 0.00f;
    this->PivotIgnoreDistance = 0.00f;
    this->ShowDitheringDebug = false;
    this->DitherRangeBuffer = 0.00f;
    this->OpacityFalloff = 0.00f;
    this->FadeSpeed = 0.00f;
    this->MinimumOpacityCombat = 0.00f;
    this->OpacityFalloffCombat = 0.00f;
    this->ForceInvisibleDistToCamera = 0.00f;
    this->bOnlyDitherCameraDuringCombat = false;
}

