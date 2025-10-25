#include "BTService_EquipWeapon.h"

UBTService_EquipWeapon::UBTService_EquipWeapon() {
    this->EquipOnBecomeRelevant = EEquipType::None;
    this->EquipOnCeaseRelevant = EEquipType::None;
    this->bInstantEquip = false;
}


