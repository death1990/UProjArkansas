#include "GhostNavMeshComponent.h"

UGhostNavMeshComponent::UGhostNavMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::EvenIfNotCollidable;
}


