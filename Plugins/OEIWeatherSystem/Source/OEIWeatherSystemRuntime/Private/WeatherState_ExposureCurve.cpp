#include "WeatherState_ExposureCurve.h"

UWeatherState_ExposureCurve::UWeatherState_ExposureCurve() {
    this->bOverride_AutoExposureMinBrightness = false;
    this->bOverride_AutoExposureMaxBrightness = false;
    this->bOverride_AutoExposureBias = false;
    this->m_AutoExposureMinBrightnessCurve = NULL;
    this->m_AutoExposureMaxBrightnessCurve = NULL;
    this->m_AutoExposureBiasCurve = NULL;
    this->m_KeyType = eCurveKey_Time;
}


