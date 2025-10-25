#include "ArmorSetModSlot.h"

FArmorSetModSlot::FArmorSetModSlot() {
    this->ModSlot = EArmorModSlot::Armoring;
    this->bModdable = false;
    this->CurrentModClass = NULL;
    this->EquippedMod = NULL;
}

