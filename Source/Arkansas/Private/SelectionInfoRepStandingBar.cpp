#include "SelectionInfoRepStandingBar.h"

USelectionInfoRepStandingBar::USelectionInfoRepStandingBar() {
    this->OffsetParameter = TEXT("Offset");
    this->RepTargetEnabledParameter = TEXT("TargetEnabled");
    this->RepTargetPositionParameter = TEXT("RepTargetPosition");
    this->RepBarMaterialStandingModifier = 3;
    this->FactionStandingTextBlock = NULL;
    this->ReputationProgressBar = NULL;
    this->ReputationBarMaterial = NULL;
}


