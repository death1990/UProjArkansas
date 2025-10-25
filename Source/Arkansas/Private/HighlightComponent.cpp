#include "HighlightComponent.h"

UHighlightComponent::UHighlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HighlightPostProcessMaterial = NULL;
    this->PostProcessDynamicMaterial = NULL;
}


