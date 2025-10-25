#include "CameraModifier_Xray.h"

UCameraModifier_Xray::UCameraModifier_Xray() {
    this->TemporalAAFilterSize = 4.00f;
    this->TemporalAACurrentFrameWeight = 0.60f;
}


