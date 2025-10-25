#include "PooledParticleSystemComponent.h"

UPooledParticleSystemComponent::UPooledParticleSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwningPool = NULL;
}


