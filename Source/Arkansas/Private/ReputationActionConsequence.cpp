#include "ReputationActionConsequence.h"

FReputationActionConsequence::FReputationActionConsequence() {
    this->bPositiveAdjustment = false;
    this->StandingAdjustment = EStandingAdjustment::Minor;
    this->CustomAmount = 0;
    this->TalkStandingAdjustment = EStandingAdjustment::Minor;
    this->TalkCustomAmount = 0;
    this->BribeStandingAdjustment = EStandingAdjustment::Minor;
    this->BribeCustomAmount = 0;
}

