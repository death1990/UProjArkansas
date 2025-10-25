#include "OnReceiveDamage.h"

UOnReceiveDamage::UOnReceiveDamage() {
    this->DamageType = NULL;
    this->DamageFlag = EDamageFlags::None;
    this->bPassThroughDamage = true;
    this->PassThroughDamageScalar = 1.00f;
    this->bRequirePlayerIsDamageSource = false;
}

void UOnReceiveDamage::OnDamageEvent(const FCauseDamageInfo& CauseDamageInfo) {
}


