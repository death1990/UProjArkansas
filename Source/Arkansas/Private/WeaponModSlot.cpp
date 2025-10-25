#include "WeaponModSlot.h"

FWeaponModSlot::FWeaponModSlot() {
    this->bModdable = false;
    this->DefaultMod = NULL;
    this->CurrentMod = NULL;
    this->SlotDefaultVisuals = NULL;
    this->CurrentSourceVisual = NULL;
    this->TPVCurrentVisuals = NULL;
    this->TPVPendingRemovalVisuals = NULL;
    this->FPVCurrentVisuals = NULL;
    this->FPVPendingRemovalVisuals = NULL;
}

