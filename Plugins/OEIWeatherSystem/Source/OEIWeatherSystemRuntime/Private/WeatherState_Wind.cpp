#include "WeatherState_Wind.h"

UWeatherState_Wind::UWeatherState_Wind() {
    this->bOverride_Direction = false;
    this->bOverride_Strength = false;
    this->bOverride_Speed = false;
    this->bOverride_MinGustAmount = false;
    this->bOverride_MaxGustAmount = false;
    this->m_Strength = 0.00f;
    this->m_Speed = 0.00f;
    this->m_MinGustAmount = 0.00f;
    this->m_MaxGustAmount = 0.00f;
}


