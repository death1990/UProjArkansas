#include "DamageEffectWidget.h"

UDamageEffectWidget::UDamageEffectWidget() {
    this->bClampDamageTextPosition = true;
    this->FontOutlineSize = 2;
    this->FontFadeThreshold = 0.10f;
    this->DamageTextBlock = NULL;
    this->ResizeOverlay = NULL;
    this->DamageTypeImage = NULL;
    this->WeakImage = NULL;
    this->ImmuneImage = NULL;
    this->CritDisplay = NULL;
}

UImage* UDamageEffectWidget::GetWeakImage() const {
    return NULL;
}

UImage* UDamageEffectWidget::GetImmuneImage() const {
    return NULL;
}

UImage* UDamageEffectWidget::GetDamageTypeImage() const {
    return NULL;
}


