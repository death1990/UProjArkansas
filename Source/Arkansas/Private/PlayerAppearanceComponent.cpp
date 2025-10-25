#include "PlayerAppearanceComponent.h"

UPlayerAppearanceComponent::UPlayerAppearanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableCustomization = true;
    this->bDefaultToThirdPerson = false;
}

void UPlayerAppearanceComponent::EnableThirdPersonAppearance() {
}

void UPlayerAppearanceComponent::EnableFirstPersonAppearance() {
}


