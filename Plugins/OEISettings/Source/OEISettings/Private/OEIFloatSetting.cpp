#include "OEIFloatSetting.h"

UOEIFloatSetting::UOEIFloatSetting() {
    this->DefaultValue = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->StepSize = 0.10f;
    this->NumericalType = EOEINumericalType::Default;
}


