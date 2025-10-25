#include "WeatherState_Fog.h"

UWeatherState_Fog::UWeatherState_Fog() {
    this->bOverride_FogDensity = false;
    this->bOverride_FogFalloff = false;
    this->bOverride_FogInscatteringColor = false;
    this->bOverride_VolumetricFogScattering = false;
    this->bOverride_VolumetricFogExtinction = false;
    this->bOverride_VolumetricFogDistance = false;
    this->bOverride_VolumetricFogAlbedo = false;
    this->bOverride_VolumetricFogEmissive = false;
    this->bOverride_SunRayBrightness = false;
    this->bOverride_SecondaryFogDensity = false;
    this->bOverride_SecondaryFogFalloff = false;
    this->bOverride_SecondaryFogHeightOffset = false;
    this->m_FogDensity = 0.02f;
    this->m_FogFalloff = 0.20f;
    this->m_VolumetricFogScattering = 0.20f;
    this->m_VolumetricFogExtinction = 1.00f;
    this->m_VolumetricFogDistance = 6000.00f;
    this->m_SunRayBrightness = 1.00f;
    this->m_SecondaryFogDensity = 0.00f;
    this->m_SecondaryFogFalloff = 0.20f;
    this->m_SecondaryFogHeightOffset = 0.00f;
}


