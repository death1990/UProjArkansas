#include "AIDefensiveActionsComponent.h"

UAIDefensiveActionsComponent::UAIDefensiveActionsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void UAIDefensiveActionsComponent::OnTakeDamage(const FCauseDamageInfo& CauseDamageInfo) {
}


