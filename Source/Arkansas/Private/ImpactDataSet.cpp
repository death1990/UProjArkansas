#include "ImpactDataSet.h"

UImpactDataSet::UImpactDataSet() {
    this->bAlwaysPlayAtImpactPoint = true;
    this->bPlayForAllAppliedDamage = true;
    this->FxData = NULL;
    this->AudioData = NULL;
    this->CameraPostProcessing = NULL;
    this->AISoundType = EImpactAIType::Ricochet;
    this->AISoundRadius = 500.00f;
}

void UImpactDataSet::PlayImpactForHit(const UObject* WorldContext, const FHitResult& InitialImpact, const FIndianaDamageEvent& DamageEvent, const FDamageDescription& DamageDescription, AActor* Instigator, const UWeapon* Weapon, AProjectile* Projectile) const {
}


