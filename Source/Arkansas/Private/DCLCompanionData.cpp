#include "DCLCompanionData.h"

FDCLCompanionData::FDCLCompanionData() {
    this->CompanionID = ESpecialObsidianID::None;
    this->bClearExistingPerksOverride = false;
    this->bClearExistingEquipmentOverride = false;
    this->CompanionTier = Zero;
    this->WeaponUpgradeChoice = Choice1;
    this->ArmorUpgradeChoice = Choice1;
}

