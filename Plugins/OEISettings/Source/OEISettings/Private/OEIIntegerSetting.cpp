#include "OEIIntegerSetting.h"

UOEIIntegerSetting::UOEIIntegerSetting() {
    this->DefaultValue = 0;
    this->MinValue = 0;
    this->MaxValue = 1;
    this->NumericalType = EOEINumericalType::Default;
    this->IntegerArchetype = EOEIIntegerArchetype::Default;
}


