#include "AddTemporaryHealthStatusEfffect.h"

UAddTemporaryHealthStatusEfffect::UAddTemporaryHealthStatusEfffect() {
    this->bUsePassThroughValue = false;
    this->TempHealthValue = 0.00f;
    this->TempHealthValuePercent = 0.00f;
    this->TempHealthType = ETempHealthValueType::Value;
}


