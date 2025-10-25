#include "ReticleIndicatorEntryBaseWidget.h"

UReticleIndicatorEntryBaseWidget::UReticleIndicatorEntryBaseWidget() {
    this->OffsetFromCVARValue = 0.00f;
    this->bUseAimBasedAngle = true;
    this->ClampAngleSides = 90;
    this->bHideIndicatorWhenActorVisible = false;
    this->bUseRatioFade = false;
    this->bUseRatioSlide = false;
    this->bOnlyHideIfInReticleRadius = false;
    this->EntrySpacer = NULL;
}


