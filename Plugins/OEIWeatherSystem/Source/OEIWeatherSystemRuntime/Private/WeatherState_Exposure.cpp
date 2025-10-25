#include "WeatherState_Exposure.h"

UWeatherState_Exposure::UWeatherState_Exposure() {
    this->bOverride_AutoExposureMinBrightness = false;
    this->bOverride_AutoExposureMaxBrightness = false;
    this->bOverride_AutoExposureBias = false;
    this->m_AutoExposureMinBrightness = 0.00f;
    this->m_AutoExposureMaxBrightness = 0.00f;
    this->m_AutoExposureBias = 0.00f;
}


