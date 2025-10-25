#include "ArmorComponent.h"

UArmorComponent::UArmorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->EquippedArmorSet = NULL;
    this->bUseSelfRepairingArmor = false;
    this->SelfRepairingArmorInitialDT = 50;
    this->SelfRepairingArmorDamageThreshold = 50;
    this->SelfRepairingArmorDTLoss = 10;
    this->SelfRepairingArmorRecoveryTime = 10.00f;
    this->SelfRepairingArmorRegenSpell = NULL;
    this->SelfRepairingArmorBreakSpell = NULL;
}

void UArmorComponent::TinkerAdvanceArmor(bool bIgnoreCost) {
}

void UArmorComponent::OnDamageEvent(const FCauseDamageInfo& CauseDamageInfo) {
}


