#include "StageCameraLabelSettings.h"

FStageCameraLabelSettings::FStageCameraLabelSettings() {
    this->CameraShot = ECameraShot::Long;
    this->CameraTarget = EMarkType::None;
    this->CameraPosition = ECameraPosition::FirstPerson;
    this->CameraPositionSource = EMarkType::None;
    this->CameraPositionOffset = ECameraPositonOffset::None;
    this->CameraAngle = ECameraAngle::EyeLevel;
}

