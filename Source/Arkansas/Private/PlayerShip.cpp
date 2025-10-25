#include "PlayerShip.h"

APlayerShip::APlayerShip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TakeoffSequence = NULL;
    this->LandingSequence = NULL;
    this->ShipDestination = NULL;
    this->bAlwaysActive = false;
}

void APlayerShip::SetCutsceneHidden(bool bNewCutsceneHidden) {
}

void APlayerShip::OnTakeoffSequenceComplete() {
}



void APlayerShip::OnLandingSequenceComplete() {
}



AIndianaAiCharacter* APlayerShip::GetActiveCompanionInstance(ESpecialObsidianID SpecialID, bool bIgnoreStasised) const {
    return NULL;
}


