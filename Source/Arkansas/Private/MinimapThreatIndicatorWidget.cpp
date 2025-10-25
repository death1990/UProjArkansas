#include "MinimapThreatIndicatorWidget.h"

UMinimapThreatIndicatorWidget::UMinimapThreatIndicatorWidget() {
    this->ThreatImage = NULL;
    this->UnawareHostileOpacity = 0.40f;
    this->AwareHostileOpacity = 1.00f;
    this->TotalTransitionTime = 0.30f;
    this->IndicatorIndexFromTopCenter = 0;
    this->bIsOnLeftSide = false;
}


