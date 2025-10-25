#include "WeatherState_Atmospheric.h"

UWeatherState_Atmospheric::UWeatherState_Atmospheric() {
    this->bOverride_RayleighScatteringScale = false;
    this->bOverride_MieScatteringScale = false;
    this->bOverride_MieAbsorptionScale = false;
    this->bOverride_LayerBottomAltitude = false;
    this->bOverride_LayerHeight = false;
    this->m_RayleighScatteringScale = 0.01f;
    this->m_MieScatteringScale = 0.00f;
    this->m_MieAbsorptionScale = 0.00f;
    this->m_LayerBottomAltitude = 5.00f;
    this->m_LayerHeight = 10.00f;
}


