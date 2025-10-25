#include "TargetableComponent.h"

UTargetableComponent::UTargetableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisibilityMethod = ETargetingVisibilityMethod::ExposedLocation;
    this->bRequiresRecentRenderingForSelection = true;
    this->bRequiresLineOfSightForSelection = false;
    this->bOverrideTagOffset = false;
    this->bApplyOffsetInAbsoluteSpace = false;
    this->bApplyAbsoluteOffsetFromRoot = false;
    this->OuterBoundingBoxWidthMultiplier = -1.00f;
    this->OuterBoundingBoxHeightMultiplier = -1.00f;
    this->InnerBoundingBoxWidthMultiplier = -1.00f;
    this->InnerBoundingBoxHeightMultiplier = -1.00f;
}

void UTargetableComponent::SetTargetable(bool bNewTargetable) {
}

void UTargetableComponent::OnActionToggled(ETogglableAction ToggleActionType, bool bIsToggled) {
}


