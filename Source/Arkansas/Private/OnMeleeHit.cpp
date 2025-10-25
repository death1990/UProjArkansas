#include "OnMeleeHit.h"

UOnMeleeHit::UOnMeleeHit() {
    this->MeleeType = EMeleeAttackType::None;
    this->MeleeAction = EMeleeAction::Invalid;
    this->MinNumHit = 1;
    this->bCarryOverNumOfHits = false;
    this->bPassThroughDamage = false;
    this->PassThroughDamageScalar = 1.00f;
    this->bIgnorePlayerCharacter = false;
}

void UOnMeleeHit::OnMeleeHit(AActor* Attacker, const TArray<AActor*>& HitActors, UWeapon* Weapon, float Damage) const {
}


