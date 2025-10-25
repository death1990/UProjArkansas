#include "TravelManager.h"

UTravelManager::UTravelManager() {
    this->CurrentShipLocation = NULL;
    this->ActiveTravelDestination = NULL;
    this->LastTravelDestination = NULL;
}

void UTravelManager::SetTravelCinematicModeBP(bool bNewCinematicMode) {
}

void UTravelManager::SetShipLocationDebug(const FName& ShipLocation) {
}

void UTravelManager::SetCurrentShipLocationBP(UShipDestinationData* Destination) {
}

bool UTravelManager::IsTravelingBP() {
    return false;
}

bool UTravelManager::IsSeamlessTravelWorkingBP() {
    return false;
}

bool UTravelManager::IsInSeamlessTravelBP() {
    return false;
}

bool UTravelManager::IsInBlockingTravelBP() {
    return false;
}

UShipDestinationData* UTravelManager::GetCurrentShipLocationBP() {
    return NULL;
}

APlayerShip* UTravelManager::GetActivePlayerShipBP() {
    return NULL;
}

void UTravelManager::GameplayReadyToSeamlessTransitionBP() {
}

void UTravelManager::BeginTravelToBP(const UPointOfInterestData* Destination, bool bPassGametime, bool bTriggerAutosave, bool bForceBlocking) {
}


