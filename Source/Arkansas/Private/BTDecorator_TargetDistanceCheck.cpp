#include "BTDecorator_TargetDistanceCheck.h"

UBTDecorator_TargetDistanceCheck::UBTDecorator_TargetDistanceCheck() {
    this->NodeName = TEXT("Target Distance Check");
    this->LocationType = ETargetInfoRelativeLocation::TrackedLocation;
    this->Operator = EComparisonOperator::LessThan;
    this->Value = 0.00f;
}


