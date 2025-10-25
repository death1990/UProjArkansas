#include "GlobalFactionData.h"

UGlobalFactionData::UGlobalFactionData() {
    this->MaximumStanding = 0;
    this->ViolentBountyGain = EBountyAdjustment::Extreme;
    this->ViolentStandingLoss = EStandingAdjustment::Major;
    this->InsufficientFundsStandingLoss = EStandingAdjustment::Moderate;
    this->RestrictedAreaBountyGain = EBountyAdjustment::Moderate;
    this->BountyDegradationXPMultiplier = 0.00f;
    this->MinimumBountyDegradationAmount = 0;
    this->RepDisplayRatioBounds = 100;
    this->FreeTreatmentFactionStandingLoss = 100;
    this->NeutralSumThreshold = 0.25f;
    this->MixedSumThreshold = 0.99f;
}


