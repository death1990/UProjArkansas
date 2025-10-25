#include "BTDecorator_HasHardPoint.h"

UBTDecorator_HasHardPoint::UBTDecorator_HasHardPoint() {
    this->NodeName = TEXT("Has Hard Point");
    this->FlowAbortMode = EBTFlowAbortMode::LowerPriority;
}


