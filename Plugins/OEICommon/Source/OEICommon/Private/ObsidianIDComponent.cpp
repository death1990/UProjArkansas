#include "ObsidianIDComponent.h"

UObsidianIDComponent::UObsidianIDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataTag = -1;
    this->bLoadedInstanceData = false;
    this->bInstancesShareSavedState = false;
}


