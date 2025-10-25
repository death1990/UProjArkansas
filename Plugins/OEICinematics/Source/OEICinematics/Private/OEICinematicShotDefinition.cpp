#include "OEICinematicShotDefinition.h"

FOEICinematicShotDefinition::FOEICinematicShotDefinition() {
    this->BlendMode = EOEIShotBlendMode::Discrete;
    this->Alpha = 0.00f;
    this->FieldOfViewAlpha = 0.00f;
    this->RotationAlpha = 0.00f;
    this->LocationAlpha = 0.00f;
    this->DepthOfFieldAlpha = 0.00f;
}

