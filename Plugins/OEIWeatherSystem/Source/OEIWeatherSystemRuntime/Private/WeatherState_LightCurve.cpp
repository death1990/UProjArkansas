#include "WeatherState_LightCurve.h"

UWeatherState_LightCurve::UWeatherState_LightCurve() {
    this->bOverride_LightIntensity = false;
    this->bOverride_SkyLightIntensity = false;
    this->bOverride_SecondarySkyLightIntensity = false;
    this->bOverride_IndirectSkyLightIntensity = false;
    this->m_LightIntensityModifierCurve = NULL;
    this->m_SkyLightIntensityModifierCurve = NULL;
    this->m_SecondarySkyLightIntensityModifierCurve = NULL;
    this->m_IndirectSkyLightIntensityModifierCurve = NULL;
    this->m_KeyType = eCurveKey_Time;
}


