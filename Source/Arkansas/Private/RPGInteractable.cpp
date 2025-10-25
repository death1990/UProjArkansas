#include "RPGInteractable.h"

ARPGInteractable::ARPGInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseInteractableStates = false;
    this->bCanOnlyBeUsedOnce = true;
    this->MeshToAttachTo = NULL;
    this->AttachedMeshComponent = NULL;
    this->AudioComponentClass = NULL;
}


