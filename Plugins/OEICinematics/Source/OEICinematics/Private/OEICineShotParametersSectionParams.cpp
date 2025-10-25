#include "OEICineShotParametersSectionParams.h"

FOEICineShotParametersSectionParams::FOEICineShotParametersSectionParams() {
    this->FieldOfViewAxis = EOEIFieldOfViewAxis::Horizontal;
    this->HandoffMode = EOEIShotHandoffMode::Unspecified;
    this->ShotInterpolator = NULL;
}

