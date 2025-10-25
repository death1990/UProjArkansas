#include "EncounterWaveInformation.h"

FEncounterWaveInformation::FEncounterWaveInformation() {
    this->bOverrideSimultaneousNPCs = false;
    this->SimultaneousNPCs = 0;
    this->bCompleted = false;
    this->NumDeadChildren = 0;
    this->NumActiveChildren = 0;
    this->NumSpawningChildren = 0;
    this->bActivationDelayHasStarted = false;
    this->bActivationDelayComplete = false;
    this->bHasEverBeenActivated = false;
    this->ActivationTime = 0.00f;
    this->bEnableAggroOverride = false;
    this->AggroType = EEncounterAggroType::Unaware;
    this->State = EEncounterWaveState::Inactive;
}

