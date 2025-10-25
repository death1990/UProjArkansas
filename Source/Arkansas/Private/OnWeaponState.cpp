#include "OnWeaponState.h"

UOnWeaponState::UOnWeaponState() {
    this->EventType = EWeaponStateEventType::Equipped;
}

void UOnWeaponState::OnWeaponState(UEquipmentComponent* InEquipmentComponent, UWeapon* Weapon) {
}


