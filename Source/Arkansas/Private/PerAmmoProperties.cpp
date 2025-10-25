#include "PerAmmoProperties.h"

FPerAmmoProperties::FPerAmmoProperties() {
    this->DamageType = NULL;
    this->ShotsPerShot = 0;
    this->DamageScalar = 0.00f;
    this->ProjectileClass = NULL;
    this->OuterRadius = 0.00f;
    this->InnerRadius = 0.00f;
    this->bOverrideInstantHitData = false;
    this->SwitchValue = NULL;
}

