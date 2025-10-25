#include "OctreeRenderingComponent.h"

UOctreeRenderingComponent::UOctreeRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
}


