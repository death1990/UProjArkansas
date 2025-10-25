#include "WeaponAnimationsCreature.h"
#include "EMeshPerspective.h"

UWeaponAnimationsCreature::UWeaponAnimationsCreature() {
    this->Perspective = EMeshPerspective::ThirdPerson;
    this->CombatLocomotionData = NULL;
    this->AimHorizontalOffset = 0.00f;
    this->AimVerticalOffset = 0.00f;
    this->AimSourceVerticalOffset = 0.00f;
}


