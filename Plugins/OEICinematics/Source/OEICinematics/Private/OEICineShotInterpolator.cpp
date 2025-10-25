#include "OEICineShotInterpolator.h"

UOEICineShotInterpolator::UOEICineShotInterpolator() {
    this->YawSnapThreshold = 90.00f;
    this->DoubleSpeakerFramingThreshold = 40.00f;
    this->DefaultValueInitialization = EOEIShotHandoffMode::Unspecified;
}


