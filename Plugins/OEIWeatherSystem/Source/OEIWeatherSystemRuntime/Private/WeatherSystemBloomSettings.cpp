#include "WeatherSystemBloomSettings.h"

FWeatherSystemBloomSettings::FWeatherSystemBloomSettings() {
    this->m_BloomIntensityCurve = NULL;
    this->m_KeyType = eCurveKey_Time;
}

