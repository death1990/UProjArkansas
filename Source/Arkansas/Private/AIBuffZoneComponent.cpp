#include "AIBuffZoneComponent.h"

UAIBuffZoneComponent::UAIBuffZoneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuffRadius = 1000.00f;
    this->DestroyedCooldown = 10.00f;
}

bool UAIBuffZoneComponent::IsLocationInBuffZone(AIndianaAiCharacter* Character, FVector Location) {
    return false;
}

AIndianaAiCharacter* UAIBuffZoneComponent::GetOwningCharacter() {
    return NULL;
}

void UAIBuffZoneComponent::BuffDestroyed() {
}

void UAIBuffZoneComponent::AddTemporaryAIBuffZone(AIndianaAiCharacter* Character, FVector Location, float Radius, float Time) {
}


