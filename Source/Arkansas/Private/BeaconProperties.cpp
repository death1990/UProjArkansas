#include "BeaconProperties.h"

FBeaconProperties::FBeaconProperties() {
    this->BeaconType = EBeaconType::None;
    this->BeaconTagWidgetClass = NULL;
    this->bAreaBeacon = false;
    this->AreaBeaconRadius = 0.00f;
}

