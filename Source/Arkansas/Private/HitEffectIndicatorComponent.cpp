#include "HitEffectIndicatorComponent.h"

UHitEffectIndicatorComponent::UHitEffectIndicatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PostProcessMaterial = NULL;
    this->PostProcessDynamicMaterial = NULL;
    this->GrowthRate = 0.00f;
    this->DropRate = 0.00f;
    this->Flatness = 0.00f;
    this->MinDamageToReact = 0.00f;
    this->MaxDamageToReact = 0.00f;
    this->MinDamageHeight = 0.00f;
    this->MaxDamageHeight = 0.00f;
    this->TextureWidth = 0.00f;
}

void UHitEffectIndicatorComponent::OnTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UHitEffectIndicatorComponent::OnHit(float NormalizedAmount, float IncidentAngleRelativeToCameraDegrees) {
}

void UHitEffectIndicatorComponent::HitEffectIndicatorEnableDebugKeys() {
}


