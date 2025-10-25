#include "CauseDamageReticleWidget.h"

UCauseDamageReticleWidget::UCauseDamageReticleWidget() {
    this->ReticleHitMarkerData = NULL;
    this->HitCrosshair = NULL;
    this->KillCrosshair = NULL;
    this->bExclusiveHitVisuals = false;
    this->ShowHitTime = 0.20f;
    this->ShowKillTime = 0.20f;
}

void UCauseDamageReticleWidget::OnItemEquipped(UItem* Item) {
}

void UCauseDamageReticleWidget::OnCauseDamage(const FCauseDamageInfo& CauseDamageInfo) {
}


