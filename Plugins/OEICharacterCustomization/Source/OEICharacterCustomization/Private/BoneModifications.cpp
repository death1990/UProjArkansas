#include "BoneModifications.h"

UBoneModifications::UBoneModifications() {
    this->MinStrength = 0.00f;
    this->MaxStrength = 1.00f;
    this->StrengthStep = 0.05f;
    this->AnimToGenerateFrom = NULL;
    this->AnimFrame = 0;
}


