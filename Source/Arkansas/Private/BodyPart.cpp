#include "BodyPart.h"

FBodyPart::FBodyPart() {
    this->bRepresentsMultipleBodyParts = false;
    this->DirectionalBodyPartsOffset = 0.00f;
    this->bWeakSpot = false;
    this->bCanBeSevered = false;
    this->bBulletMagnetism = false;
}

