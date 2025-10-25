#include "OnPlayerDetectionChange.h"

UOnPlayerDetectionChange::UOnPlayerDetectionChange() {
    this->TargetDetectionType = EDetectionType::None;
}

void UOnPlayerDetectionChange::OnDetectionChange(AActor* Detectee, EDetectionType DetectionType) {
}


