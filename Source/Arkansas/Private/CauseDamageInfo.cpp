#include "CauseDamageInfo.h"

FCauseDamageInfo::FCauseDamageInfo() {
    this->DamageEventType = EDamageEventType::Invalid;
    this->DesiredDamage = 0.00f;
    this->ActualDamage = 0.00f;
    this->PreArmorDamage = 0.00f;
    this->DamageType = NULL;
}

