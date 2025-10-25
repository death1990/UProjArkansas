#include "OnSkillAllocationsConfirmed.h"

UOnSkillAllocationsConfirmed::UOnSkillAllocationsConfirmed() {
    this->NumInvestedSkills = -1;
    this->Operator = EComparisonOperator::Equals;
}

void UOnSkillAllocationsConfirmed::OnSkillAllocationsConfirmed(int32 NumTotalSkillsInvestedIn) const {
}


