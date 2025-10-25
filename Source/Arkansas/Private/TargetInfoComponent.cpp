#include "TargetInfoComponent.h"

UTargetInfoComponent::UTargetInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetSwitchingCooldownCompanion = 10.00f;
    this->TargetSwitchingCooldownNonCompanion = 3.00f;
    this->TargetingPlayerRTPC = NULL;
}

void UTargetInfoComponent::OnWeaponEndEquip(UEquipmentComponent* InEquipmentComponent, UWeapon* Weapon) {
}


