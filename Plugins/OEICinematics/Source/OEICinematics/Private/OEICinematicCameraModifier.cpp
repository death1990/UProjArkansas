#include "OEICinematicCameraModifier.h"

UOEICinematicCameraModifier::UOEICinematicCameraModifier() {
    this->ViewTarget = NULL;
    this->InterpolationExponent = 2.00f;
    this->RotationThreshold = 0.01f;
    this->RotationControlThreshold = 0.10f;
    this->DefaultHandoffMode = EOEIShotHandoffMode::Unspecified;
    this->bUseVerticalFieldOfView = false;
    this->BaseFStop = 22.00f;
    this->CameraMinFStop = 1.40f;
    this->CameraBladeCount = 8;
}


