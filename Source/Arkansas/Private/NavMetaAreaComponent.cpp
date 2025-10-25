#include "NavMetaAreaComponent.h"

UDEPRECATED_NavMetaAreaComponent::UDEPRECATED_NavMetaAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAffectsGroundPoly = true;
    this->bAffectsOffMeshPoly = false;
    this->bUseComplexGeomAsNavEdges = true;
    this->bHasVolume = true;
    this->bPhysicsCollisionOnly = false;
    this->bCustomCollisionOnly = false;
    this->bCustomCollisionRelative = true;
    this->bIncludeAgentHeight = true;
    this->CollisionComponent = NULL;
    this->Extents = 0.00f;
    this->DefaultMetaDataToAdd = 0;
    this->DefaultMetaDataToRemove = 0;
    this->DefaultInvalidatePaths = false;
}

void UDEPRECATED_NavMetaAreaComponent::K2_RequestInvalidatePaths() {
}

void UDEPRECATED_NavMetaAreaComponent::K2_RemoveMetaData(int32 MetaData) {
}

void UDEPRECATED_NavMetaAreaComponent::K2_ProcessSinglePoly_Implementation(ARecastNavMesh* NavigationData, FVector PolyCenter, FBox AreaBounds) {
}

void UDEPRECATED_NavMetaAreaComponent::K2_MarkAreaDirtyCustom(int32 MetaDataToAdd, int32 MetaDataToRemove, bool bInvalidatePaths) {
}

void UDEPRECATED_NavMetaAreaComponent::K2_MarkAreaDirty() {
}

void UDEPRECATED_NavMetaAreaComponent::K2_AddMetaData(int32 MetaData) {
}


