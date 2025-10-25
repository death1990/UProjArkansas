#include "TPVCameraConfig.h"

FTPVCameraConfig::FTPVCameraConfig() {
    this->TargetArmLength = 0.00f;
    this->PitchTargetArmLengthCurve = NULL;
    this->PitchFOVCurve = NULL;
    this->InterpolateElapsedSeconds = 0.00f;
    this->bLimitYaw = false;
    this->YawLimitRange = 0.00f;
    this->CameraPitchMin = 0.00f;
    this->CameraPitchMax = 0.00f;
    this->FieldOfView = 0.00f;
    this->bEnableFieldOfViewSettingsRange = false;
    this->bUseControllerRotationYaw = false;
    this->bOrientRotationToMovement = false;
    this->YawOffset = 0.00f;
    this->MaxYawOffset = 0.00f;
    this->LookAtTargetMinDistance = 0.00f;
    this->RotationSmoothingCoefficient = 0.00f;
    this->WhiskerSettingsDataAsset = NULL;
}

