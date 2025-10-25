#include "WeatherSystemSkyAtmosphereSettings.h"

FWeatherSystemSkyAtmosphereSettings::FWeatherSystemSkyAtmosphereSettings() {
    this->m_SkyLuminanceFactorCurve = NULL;
    this->m_RayleighScatteringCurve = NULL;
    this->m_MieScatteringCurve = NULL;
    this->m_MieAbsorptionCurve = NULL;
    this->m_KeyType = eCurveKey_Time;
}

