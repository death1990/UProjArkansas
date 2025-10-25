#include "DynamicEffectProperties.h"

FDynamicEffectProperties::FDynamicEffectProperties() {
    this->bIgnoreApplyChance = false;
    this->bCalledShot = false;
    this->bAffectCompanions = false;
    this->bUsePassThroughFloat = false;
    this->PassThroughParamFloat = 0.00f;
    this->IntervalOverride = 0.00f;
}

