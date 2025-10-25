#include "WeaponMod.h"

UWeaponMod::UWeaponMod() {
    this->ModificationSlot = EModSlot::Barrel;
    this->DamageTypeOverride = NULL;
    this->RecoilData = NULL;
    this->OverrideFireMode = EFireMode::None;
    this->OverrideSecondaryFireMode = EFireMode::None;
    this->PrimaryModeDamageDescriptionOverrideFlags = 0;
    this->SecondaryModeDamageDescriptionOverrideFlags = 0;
    this->bOverrideAimOffsets = false;
    this->bShouldAddReticleOffsetToAimOffset = false;
}


