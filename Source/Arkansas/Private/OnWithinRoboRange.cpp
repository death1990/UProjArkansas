#include "OnWithinRoboRange.h"

UOnWithinRoboRange::UOnWithinRoboRange() {
    this->NumDetectors = 1;
    this->Operator = EComparisonOperator::Equals;
}

void UOnWithinRoboRange::OnRoboWithinRangeStateChanged(int32 PrevRoboCount, int32 CurrRoboCount) {
}


