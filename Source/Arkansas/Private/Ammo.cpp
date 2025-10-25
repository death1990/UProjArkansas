#include "Ammo.h"

UAmmo::UAmmo() {
    this->bCanPenetrate = false;
    this->bForceRadialDamage = false;
    this->OnHitSpell = NULL;
    this->PassiveSpell = NULL;
}


