#include "OwnershipVolume.h"

AOwnershipVolume::AOwnershipVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningFaction = NULL;
    this->bPlayerOwned = false;
    this->RequiredRankLevelForPickup = ERankLevel::Zero;
}


