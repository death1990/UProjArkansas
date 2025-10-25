#include "OnPlayerDetectedBy.h"

UOnPlayerDetectedBy::UOnPlayerDetectedBy() {
    this->NumDetectors = 1;
    this->Operator = EComparisonOperator::Equals;
}

void UOnPlayerDetectedBy::OnUndetectedBy(AActor* Detectee, AIndianaAiCharacter* Detector, int32 DetectorCount) {
}

void UOnPlayerDetectedBy::OnDetectedBy(AActor* Detectee, AIndianaAiCharacter* Detector, int32 DetectorCount) {
}


