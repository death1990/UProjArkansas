#include "WeatherSystemExposureSettings.h"

FWeatherSystemExposureSettings::FWeatherSystemExposureSettings() {
    this->m_ExposureCurve = NULL;
    this->m_KeyType = eCurveKey_Time;
}

