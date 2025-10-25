#include "PlayerEnvironmentInteractionComponent.h"

UPlayerEnvironmentInteractionComponent::UPlayerEnvironmentInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SoftCoverEnteredEvent = NULL;
    this->SoftCoverExitedEvent = NULL;
    this->SoftCoverRTPC = NULL;
}

void UPlayerEnvironmentInteractionComponent::OnOwnerCombatStateChanged(AIndianaCharacter* Character, bool bIsInCombat, bool bRestoring) {
}


