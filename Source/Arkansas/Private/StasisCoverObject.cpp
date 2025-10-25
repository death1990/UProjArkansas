#include "StasisCoverObject.h"
#include "InteractableComponent.h"

AStasisCoverObject::AStasisCoverObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Interactable = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
}

void AStasisCoverObject::CompleteInteract(const FInteractionDescription& Description) {
}

bool AStasisCoverObject::CanInteract(AIndianaCharacter* Initiator, const FInteractPayload& Payload) const {
    return false;
}


