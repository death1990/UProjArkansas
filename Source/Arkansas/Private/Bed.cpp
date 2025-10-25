#include "Bed.h"

ABed::ABed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RestSpell = NULL;
    this->CameraFadeDuration = 1.00f;
    this->MinHours = 6;
    this->MaxHours = 12;
}


