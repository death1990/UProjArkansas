#include "AICloakingComponent.h"

UAICloakingComponent::UAICloakingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->CloakTime = 2.00f;
    this->UncloakTime = 2.00f;
}


