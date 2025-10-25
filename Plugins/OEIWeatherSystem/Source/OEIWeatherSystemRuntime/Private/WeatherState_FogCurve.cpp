#include "WeatherState_FogCurve.h"

UWeatherState_FogCurve::UWeatherState_FogCurve() {
    this->bOverride_FogDensity = false;
    this->bOverride_FogFalloff = false;
    this->bOverride_FogInscatteringColor = false;
    this->bOverride_VolumetricFogScattering = false;
    this->bOverride_VolumetricFogExtinction = false;
    this->bOverride_VolumetricFogDistance = false;
    this->bOverride_VolumetricFogAlbedo = false;
    this->bOverride_VolumetricFogEmissive = false;
    this->bOverride_SecondaryFogDensity = false;
    this->bOverride_SecondaryFogFalloff = false;
    this->bOverride_SecondaryFogHeightOffset = false;
    this->m_FogDensityCurve = NULL;
    this->m_FogFalloffCurve = NULL;
    this->m_FogInscatteringColorCurve = NULL;
    this->m_VolumetricFogScatteringCurve = NULL;
    this->m_VolumetricFogExtinctionCurve = NULL;
    this->m_VolumetricFogDistanceCurve = NULL;
    this->m_VolumetricFogAlbedoCurve = NULL;
    this->m_VolumetricFogEmissiveCurve = NULL;
    this->m_SecondaryFogDensityCurve = NULL;
    this->m_SecondaryFogFalloffCurve = NULL;
    this->m_SecondaryFogHeightOffsetCurve = NULL;
    this->m_KeyType = eCurveKey_Time;
}


