#include "OnLevelChangedListener.h"

UOnLevelChangedListener::UOnLevelChangedListener() {
    this->Operator = EComparisonOperator::Equals;
    this->EventLevel = 0;
}

void UOnLevelChangedListener::OnLevelChanged(UCharacterInfoComponent* InCharacterInfoComponent, int32 Level) {
}


