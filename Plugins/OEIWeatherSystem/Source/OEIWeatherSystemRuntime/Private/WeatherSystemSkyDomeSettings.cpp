#include "WeatherSystemSkyDomeSettings.h"

FWeatherSystemSkyDomeSettings::FWeatherSystemSkyDomeSettings() {
    this->m_SkyDomeHorizonCurve = NULL;
    this->m_SkyDomeIntensityCurve = NULL;
    this->m_SkyDomeFogContributionCurve = NULL;
    this->m_CachedSkyDomeIntensityValue = 0.00f;
    this->m_KeyType = eCurveKey_Time;
}

