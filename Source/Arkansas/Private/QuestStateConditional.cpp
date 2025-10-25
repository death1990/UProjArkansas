#include "QuestStateConditional.h"

FQuestStateConditional::FQuestStateConditional() {
    this->Operator = EEqualityComparison::Equal;
    this->ComparisonState = EQuestState::Invalid;
    this->bDefault = false;
}

