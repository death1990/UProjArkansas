#include "CrosshairWidget.h"

UCrosshairWidget::UCrosshairWidget() {
    this->TraditionalCrosshairBuffer = 56.00f;
    this->CircleBuffer = 16.00f;
    this->DotBuffer = 16.00f;
    this->StaticOffset = 36.00f;
    this->RootCanvas = NULL;
    this->WeaponContainer = NULL;
    this->ClippingCanvas = NULL;
    this->ReticuleCenter = NULL;
    this->ReticuleStealth = NULL;
    this->ReticleMinimal = NULL;
    this->ReticleImage = NULL;
    this->CauseDamageIndicator = NULL;
    this->ReticleSwitcher = NULL;
}

void UCrosshairWidget::OnShowCenterReticleChanged(bool bCurrentValue) {
}

void UCrosshairWidget::OnReticleShadowOpacityChanged(float Value) {
}

void UCrosshairWidget::OnReticleShadowColorChanged(int32 ColorIn) {
}

void UCrosshairWidget::OnReticleOverrideTypeChanged(int32 Value) {
}

void UCrosshairWidget::OnReticleOpacityChanged(float Value) {
}

void UCrosshairWidget::OnReticleColorChanged(int32 ColorIn) {
}


