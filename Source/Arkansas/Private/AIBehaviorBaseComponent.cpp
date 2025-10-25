#include "AIBehaviorBaseComponent.h"

UAIBehaviorBaseComponent::UAIBehaviorBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

AIndianaAiController* UAIBehaviorBaseComponent::GetOwningController() const {
    return NULL;
}

AIndianaAiCharacter* UAIBehaviorBaseComponent::GetOwningCharacter() const {
    return NULL;
}


