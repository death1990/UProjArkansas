#include "ReactionComponent.h"

UReactionComponent::UReactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightHitReactionStrength = 0.50f;
    this->ADSHitReactionScalar = 0.10f;
    this->StatusEffectManager = NULL;
    this->EquipmentComponent = NULL;
    this->DamageableComponent = NULL;
    this->HealthComponent = NULL;
    this->CameraComponent = NULL;
    this->HitReactionDuration = 0.10f;
    this->HitReactStrength = 0.00f;
    this->InflictedDamagePctDecayRate = 2.00f;
    this->InflictedDamagePctLight = 0.25f;
    this->InflictedDamagePctHeavy = 0.50f;
    this->bPrioritizeHeavyHitReact = true;
}

void UReactionComponent::TriggerDebugCameraShake(float Strength, float X, float Y) {
}

void UReactionComponent::OnTakeDamage(const FCauseDamageInfo& CDI) {
}


