#include "QuestRequirement.h"

UQuestRequirement::UQuestRequirement() {
    this->Operator = EEqualityComparison::Equal;
    this->ComparisonState = EQuestState::Invalid;
    this->bDefault = false;
}


