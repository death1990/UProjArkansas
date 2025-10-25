#include "TimeDilationData.h"

FTimeDilationData::FTimeDilationData() {
    this->Priority = ETimeDilationPriority::Low;
    this->Type = ETimeDilationType::Static;
    this->BlendTimeIn = 0.00f;
    this->BlendTimeOut = 0.00f;
    this->TimeDilationStatic = 0.00f;
}

