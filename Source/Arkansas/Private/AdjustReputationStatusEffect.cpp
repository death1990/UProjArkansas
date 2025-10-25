#include "AdjustReputationStatusEffect.h"

UAdjustReputationStatusEffect::UAdjustReputationStatusEffect() {
    this->bUseActionType = false;
    this->ReputationActionType = EReputationActionType::Damage;
    this->ReputationAdjustment = 100;
    this->bIgnoreFactionScalar = false;
    this->bAllFactions = true;
    this->bAllMetFactions = true;
    this->bRevealEncounterFactions = true;
    this->Faction = NULL;
}


