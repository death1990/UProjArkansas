#include "Helmet.h"
#include "EArmorSlot.h"

UHelmet::UHelmet() {
    this->ArmorSlot = EArmorSlot::Helmet;
    this->HeadStyle = EHeadStyle::Normal;
    this->HelmetVisuals = NULL;
}


