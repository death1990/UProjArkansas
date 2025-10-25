#include "GlobalPerkData.h"

UGlobalPerkData::UGlobalPerkData() {
    this->MakeshiftArmorerBitsForDT = 100;
    this->MakeshiftArmorerMaxDT = 100;
    this->BusyBodiesXP = 100;
    this->TargetingScannerLookTime = 1.00f;
    this->NaturesFriendStatusEffect = NULL;
    this->NaturesBestFriendSpell = NULL;
    this->WholesaleSpenderBitRequirement = 500;
    this->GetBackUpPerkReviveTargetAngleTolerance = 7.00f;
    this->GetBackUpPerkInteractionTargetSocket = TEXT("Chest");
    this->AvailableMaterial = NULL;
    this->UnavailableMaterial = NULL;
    this->PendingMaterial = NULL;
    this->PurchasedMaterial = NULL;
}


