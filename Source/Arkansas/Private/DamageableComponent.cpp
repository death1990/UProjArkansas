#include "DamageableComponent.h"

UDamageableComponent::UDamageableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}


