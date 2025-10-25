#include "TooltipComponent.h"

UTooltipComponent::UTooltipComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RPGRequirements = NULL;
    this->MaxRange = 1000.00f;
    this->bHideForEnglish = true;
    this->bCanBeHighlighted = true;
}


