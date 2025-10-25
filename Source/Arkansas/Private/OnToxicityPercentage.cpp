#include "OnToxicityPercentage.h"

UOnToxicityPercentage::UOnToxicityPercentage() {
    this->ToxicityPercentage = 0.00f;
    this->Operator = EComparisonOperator::Equals;
}

void UOnToxicityPercentage::OnToxicityChanged(float PrevNormTox, float CurrNormTox) {
}


