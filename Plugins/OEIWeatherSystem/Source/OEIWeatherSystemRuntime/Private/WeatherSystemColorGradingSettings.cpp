#include "WeatherSystemColorGradingSettings.h"

FWeatherSystemColorGradingSettings::FWeatherSystemColorGradingSettings() {
    this->m_WhiteBalanceCurve = NULL;
    this->m_KeyType = eCurveKey_Time;
}

