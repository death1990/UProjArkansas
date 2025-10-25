#include "ReputationListener.h"

UReputationListener::UReputationListener() {
    this->Faction = NULL;
    this->ReputationType = EReputationType::Positive;
}

void UReputationListener::OnReputationChange(const UFactionData* FactionData, EReputationType InReputationType, int32 Amount, const UReputationData* ReputationBefore, const UReputationData* ReputationAfter) {
}


