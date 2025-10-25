#include "ArmorSet.h"
#include "EArmorSlot.h"

UArmorSet::UArmorSet() {
    this->ArmorSlot = EArmorSlot::ArmorSet;
    this->BodyAppearances = NULL;
    this->ArmorType = NULL;
    this->ArmorTypeNPCOverride = NULL;
    this->AudioPlayerSurfaceType = SurfaceType_Max;
}


