#include "MapAreaBeaconWidget.h"

UMapAreaBeaconWidget::UMapAreaBeaconWidget() {
    this->AreaImage = NULL;
    this->bDisplayCenterBeacon = true;
    this->bClampBeaconScale = true;
    this->BeaconScaleMinMultiplier = 1.00f;
    this->BeaconScaleMaxMultiplier = 1.00f;
    this->bApplyNegativePadding = true;
    this->AreaBeaconActiveParamName = TEXT("ShowActive");
}


