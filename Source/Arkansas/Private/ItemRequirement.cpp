#include "ItemRequirement.h"

UItemRequirement::UItemRequirement() {
    this->Item = NULL;
    this->ItemLocation = EItemLocation::Inventory;
    this->Count = 1;
    this->bConsumeItems = false;
    this->bGrantsXP = true;
}


