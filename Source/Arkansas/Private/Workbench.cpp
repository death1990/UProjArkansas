#include "Workbench.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "InteractableComponent.h"

AWorkbench::AWorkbench(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->InteractableComponent->SetupAttachment(RootComponent);
}

TArray<EInteractionType> AWorkbench::GetInteractions(const FInteractionDescription& Description) const {
    return TArray<EInteractionType>();
}

void AWorkbench::CompleteInteract(const FInteractionDescription& InteractionDescription) {
}

bool AWorkbench::CanInteract(AIndianaCharacter* Initiator, const FInteractPayload& Payload) const {
    return false;
}


