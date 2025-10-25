#include "DamageMovementScalars.h"

FDamageMovementScalars::FDamageMovementScalars() {
    this->TextMovementBias = ETextDirectionType::NoDirectionalBias;
    this->HorizontalMovementScalarMin = 0.00f;
    this->HorizontalMovementScalarMax = 0.00f;
    this->VerticalMovementScalarMin = 0.00f;
    this->VerticalMovementScalarMax = 0.00f;
}

