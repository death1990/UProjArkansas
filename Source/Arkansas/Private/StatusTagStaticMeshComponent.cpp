#include "StatusTagStaticMeshComponent.h"

UStatusTagStaticMeshComponent::UStatusTagStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->SpottedActorTimeout = 10.00f;
    this->SpottedIcon = NULL;
    this->bCheckRestrictedAreas = true;
    this->AlertedActorTimeout = 2.00f;
    this->MinimumInvestigationAwareness = 10.00f;
    this->AbsoluteInner = 500.00f;
    this->InnerThreshold = 1500.00f;
    this->MinScale = 0.75f;
    this->OuterThreshold = 1750.00f;
    this->AbsoluteOuter = 4000.00f;
    this->MaxScale = 5.00f;
    this->ReviveStateLocationOffset = 60.00f;
    this->AwarenessDebounceThreshold = 5;
    this->StatusTagMaterial = NULL;
}

void UStatusTagStaticMeshComponent::OnAwareOfPlayerDelegate(bool bRestoring) {
}


