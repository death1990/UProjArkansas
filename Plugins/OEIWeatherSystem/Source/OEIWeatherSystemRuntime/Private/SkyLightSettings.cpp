#include "SkyLightSettings.h"

FSkyLightSettings::FSkyLightSettings() {
    this->m_IntensityCurve = NULL;
    this->m_ColorCurve = NULL;
    this->m_KeyType = eCurveKey_Time;
}

