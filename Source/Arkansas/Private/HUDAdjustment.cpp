#include "HUDAdjustment.h"

FHUDAdjustment::FHUDAdjustment() {
    this->AdjustmentType = EHUDAdjustmentType::Invalid;
    this->ResetToDefaultValue = 0.00f;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->StepSize = 0.00f;
}

