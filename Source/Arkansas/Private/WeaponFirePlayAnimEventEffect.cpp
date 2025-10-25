#include "WeaponFirePlayAnimEventEffect.h"

UWeaponFirePlayAnimEventEffect::UWeaponFirePlayAnimEventEffect() {
    this->FirstShotAnimType = EShotIndexType::None;
    this->FireAnimMode = EFireAnimMode::Default;
    this->SecondaryShotIndexType = EShotIndexType::None;
    this->SecondaryShotIndex = 1;
    this->SecondaryFireAnimMode = EFireAnimMode::Default;
    this->CurrentFireAnim = NULL;
}


