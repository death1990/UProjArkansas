#include "OnTTDMeterPercentage.h"

UOnTTDMeterPercentage::UOnTTDMeterPercentage() {
    this->TTDMeterPercentage = 0.00f;
    this->Operator = EComparisonOperator::Equals;
}

void UOnTTDMeterPercentage::OnTTDMeterChanged(float PrevValue, float CurrValue) {
}


