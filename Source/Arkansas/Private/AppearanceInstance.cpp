#include "AppearanceInstance.h"

FAppearanceInstance::FAppearanceInstance() {
    this->bUseHeadAsBaseSkeleton = false;
    this->SecondaryAppearanceMesh = NULL;
    this->AppearanceModVisual = NULL;
    this->BodyMorphTargetModVisual = NULL;
    this->CurrentFootstepData = NULL;
    this->bActive = false;
}

