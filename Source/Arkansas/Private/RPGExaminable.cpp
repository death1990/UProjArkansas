#include "RPGExaminable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "InteractableComponent.h"

ARPGExaminable::ARPGExaminable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bShouldSaveGameState = true;
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->ExaminableData = NULL;
    this->bCanOnlyBeUsedOnce = false;
    this->InteractableComponent->SetupAttachment(RootComponent);
}


