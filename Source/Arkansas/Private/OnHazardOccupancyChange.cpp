#include "OnHazardOccupancyChange.h"

UOnHazardOccupancyChange::UOnHazardOccupancyChange() {
    this->RequiredNewOccupancyType = EHazardOccupancyType::Any;
    this->bMustBeZyraniumHazard = false;
}

void UOnHazardOccupancyChange::OnHazardOccupancyChange(AIndianaCharacter* Character, bool bInside, EZyraniumType ZyraniumType) {
}


