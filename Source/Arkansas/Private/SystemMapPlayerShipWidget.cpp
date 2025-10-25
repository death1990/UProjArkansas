#include "SystemMapPlayerShipWidget.h"

USystemMapPlayerShipWidget::USystemMapPlayerShipWidget() {
    this->PlayerShipImage = NULL;
    this->ScaleCurve = NULL;
    this->DistanceCurve = NULL;
    this->UnitsPerSecond = 100.00f;
    this->MinimumTravelTime = 1.00f;
    this->MaximumTravelTime = 5.00f;
}


