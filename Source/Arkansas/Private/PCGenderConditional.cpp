#include "PCGenderConditional.h"

FPCGenderConditional::FPCGenderConditional() {
    this->Operator = EEqualityComparison::Equal;
    this->ComparisonGender = EOEIGender::Male;
    this->bDefault = false;
}

