#include "StaminaComponent.h"

UStaminaComponent::UStaminaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->bAutoActivate = true;
    this->MaxValue = 100.00f;
    this->RegenDelay = 3.00f;
    this->RegenRate = 10.00f;
    this->OutOfStaminaEvent = NULL;
}

void UStaminaComponent::StaminaReplenish(float Amount) {
}

void UStaminaComponent::StaminaConsume(float Amount) {
}

float UStaminaComponent::GetValue() const {
    return 0.0f;
}

float UStaminaComponent::GetNormalizedValue() const {
    return 0.0f;
}

float UStaminaComponent::GetMaxValue() const {
    return 0.0f;
}


