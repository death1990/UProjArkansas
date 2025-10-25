#include "InfoTrackingGenericColumnSettings.h"

FInfoTrackingGenericColumnSettings::FInfoTrackingGenericColumnSettings() {
    this->bAddReportTimeColumn = false;
    this->bAddEngineRuntimeColumn = false;
    this->bAddTestRuntimeColumn = false;
    this->bAddTestRuntimeSecondsColumn = false;
    this->bAddCurrentMapColumn = false;
    this->bAddReportTimeAndMapColumn = false;
    this->bAddEngineRuntimeAndMapColumn = false;
    this->bAddRuntimeAndMapColumn = false;
    this->bAddCurrentFloor = false;
    this->bAddPlayerLocationColumn = false;
    this->bAddDeviceProfileColumn = false;
}

