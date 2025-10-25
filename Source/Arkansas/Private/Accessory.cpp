#include "Accessory.h"
#include "EArmorSlot.h"

UAccessory::UAccessory() {
    this->ArmorSlot = EArmorSlot::Accessory0;
    this->AccessoryVisuals = NULL;
    this->bCoversBeard = false;
    this->BlendShapeStrength = 1.00f;
}


