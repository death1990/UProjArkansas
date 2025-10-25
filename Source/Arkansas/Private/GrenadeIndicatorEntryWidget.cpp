#include "GrenadeIndicatorEntryWidget.h"

UGrenadeIndicatorEntryWidget::UGrenadeIndicatorEntryWidget() {
    this->FacingHalfAngle = 10.00f;
    this->AlphaFillParamName = TEXT("MaskShift");
    this->GrenadeImage = NULL;
    this->LeftFillImage = NULL;
    this->RightFillImage = NULL;
    this->bIsFacingProjectile = false;
    this->ProjectileWorldDistance = 0.00f;
}


