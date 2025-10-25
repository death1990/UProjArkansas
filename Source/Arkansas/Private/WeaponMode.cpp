#include "WeaponMode.h"
#include "Templates/SubclassOf.h"

UWeaponMode::UWeaponMode() {
    this->AimAssistData = NULL;
    this->SoundRadius = 1200.00f;
    this->ImpactSoundRadiusOverride = 0.00f;
    this->AIBaseDamageOverride = 0.00f;
    this->DamageModStat = NULL;
    this->AttackTTDScalar = 1.00f;
    this->DamageTypeOverride = NULL;
    this->DefaultFlags = EFireFlags::None;
}

bool UWeaponMode::IsIdle() const {
    return false;
}

bool UWeaponMode::IsFullyAimed() const {
    return false;
}

bool UWeaponMode::IsCharging() const {
    return false;
}

int32 UWeaponMode::GetPrimaryDamageTypeStacks() const {
    return 0;
}

EIndianaDamageType UWeaponMode::GetPrimaryDamageTypeEnum() const {
    return EIndianaDamageType::Physical;
}

TSubclassOf<UIndianaDamageType> UWeaponMode::GetPrimaryDamageType() const {
    return NULL;
}

float UWeaponMode::GetBaseDamage() const {
    return 0.0f;
}


