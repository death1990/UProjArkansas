#include "WeatherState_Light.h"

UWeatherState_Light::UWeatherState_Light() {
    this->bOverride_LightIntensity = false;
    this->bOverride_SkyLightIntensity = false;
    this->bOverride_SecondarySkyLightIntensity = false;
    this->bOverride_IndirectSkyLightIntensity = false;
    this->m_LightIntensityModifier = 1.00f;
    this->m_SkyLightIntensityModifier = 1.00f;
    this->m_SecondarySkyLightIntensityModifier = 1.00f;
    this->m_IndirectSkyLightIntensityModifier = 1.00f;
}


