#include "PickupSpawner.h"

APickupSpawner::APickupSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemSet = NULL;
    this->BuildDirection = ELayoutConfigurationType::Right;
    this->MaxRows = 1;
    this->bGenerateDown = true;
    this->NameSpacing = 50;
    this->GroupNameSpacing = 100;
    this->AmmoCount = 15;
}


