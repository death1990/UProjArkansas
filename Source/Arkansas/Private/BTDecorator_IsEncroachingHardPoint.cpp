#include "BTDecorator_IsEncroachingHardPoint.h"

UBTDecorator_IsEncroachingHardPoint::UBTDecorator_IsEncroachingHardPoint() {
    this->NodeName = TEXT("Is Encroaching HardPoint");
    this->FlowAbortMode = EBTFlowAbortMode::LowerPriority;
}


