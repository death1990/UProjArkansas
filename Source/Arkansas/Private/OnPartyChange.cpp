#include "OnPartyChange.h"

UOnPartyChange::UOnPartyChange() {
    this->NumCompanions = 0;
    this->Operator = EComparisonOperator::Equals;
}

void UOnPartyChange::OnPartyChanged(AIndianaAiCharacter* Companion, bool bAdded) const {
}


