#include "OEIWwiseEmitterParams.h"

FOEIWwiseEmitterParams::FOEIWwiseEmitterParams() {
    this->bEnableAccoustics = false;
    this->bDisableOcclusion = false;
    this->bEnableDynamicOpenings = false;
    this->bEnableAcousticsVolumes = false;
    this->InterpolationResolver = OEIAcousticsInterpolationDisambiguationMode::Default;
    this->bHasListenerAudio = false;
}

