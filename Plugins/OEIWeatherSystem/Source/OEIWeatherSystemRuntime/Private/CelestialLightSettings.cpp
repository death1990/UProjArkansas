#include "CelestialLightSettings.h"

FCelestialLightSettings::FCelestialLightSettings() {
    this->m_ColorCurve = NULL;
    this->m_IntensityCurve = NULL;
    this->m_KeyType = eCurveKey_Time;
}

